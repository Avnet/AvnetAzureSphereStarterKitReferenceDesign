/// \file azure_iot_utilities.h
/// \brief This header defines a sample interface for performing basic operations with an
/// Azure IoT Hub using the low-level API layer provided by the IoTHubClient library
/// included in the Azure IoT Device SDK for C.
#pragma once

#include <azureiot/iothubtransportmqtt.h>
#include <applibs/networking.h>
#include "parson.h"

/// <summary>
///     Sets up the client in order to establish the communication channel to Azure IoT Hub.
///
///     The client is created by using the IoT Hub connection string that is provisioned
///     on the device or hardcoded into the source. The client is setup with the following
///     options:
///     - IOTHUB_CLIENT_RETRY_INTERVAL retry policy which, when the network connection
///       to the IoT Hub drops, attempts a reconnection each 5 seconds for a period of time
///       of 5000 seconds before giving up;
///     - MQTT procotol 'keepalive' value of 20 seconds; when no PINGRESP is received after
///       20 seconds, the connection is believed to be down and the retry policy kicks in;
/// </summary>
/// <returns>'true' if the client has been properly set up. 'false' when a fatal error occurred
/// while setting up the client.</returns>
/// <remarks>This function is a no-op when the client has already been set up, i.e. this
/// function has already completed successfully.</remarks>
bool AzureIoT_SetupClient(void);

/// <summary>
///     Destroys the Azure IoT Hub client.
/// </summary>
void AzureIoT_DestroyClient(void);

/// <summary>
///     Creates and enqueues reported properties state using a prepared json string.
///     The report is not actually sent immediately, but it is sent on the next 
///     invocation of AzureIoT_DoPeriodicTasks().
/// </summary>
void AzureIoT_TwinReportStateJson(
	char *reportedPropertiesString,
	size_t reportedPropertiesSize);

/// <summary>
///     Creates and enqueues a report containing the name and value pair of a Device Twin reported
///     property.
///     The report is not actually sent immediately, but it is sent on the next invocation of
///     AzureIoT_DoPeriodicTasks().
/// </summary>
/// <param name="propertyName">The name of the property to report.</param>
/// <param name="propertyValue">The value of the property.</param>
void AzureIoT_TwinReportState(const char *propertyName, size_t propertyValue);

/// <summary>
///     Creates and enqueues a message to be delivered the IoT Hub. The message is not actually sent
///     immediately, but it is sent on the next invocation of AzureIoT_DoPeriodicTasks().
/// </summary>
/// <param name="messagePayload">The payload of the message to send.</param>
void AzureIoT_SendMessage(const char *messagePayload);

/// <summary>
///     Keeps IoT Hub Client alive by exchanging data with the Azure IoT Hub.
/// </summary>
/// <remarks>
///     This function must to be invoked periodically so that the Azure IoT Hub
///     SDK can accomplish its work (e.g. sending messages, invokation of callbacks, reconnection
///     attempts, and so forth).
/// </remarks>
void AzureIoT_DoPeriodicTasks(void);

/// <summary>
///     Type of the function callback invoked whenever a message is received from IoT Hub.
/// </summary>
typedef void (*MessageReceivedFnType)(const char *payload);

/// <summary>
///     Sets a callback function invoked whenever a message is received from IoT Hub.
/// </summary>
/// <param name="callback">The callback function invoked when a message is received</param>
void AzureIoT_SetMessageReceivedCallback(MessageReceivedFnType callback);

/// <summary>
///     Type of the function callback invoked whenever a Device Twin update from the IoT Hub is
///     received.
/// </summary>
/// <param name="handle">The JSON object containing the Device Twin desired properties.</handle>
typedef void (*TwinUpdateFnType)(JSON_Object *desiredProperties);

/// <summary>
///     Sets the function callback invoked whenever a Device Twin update from the IoT Hub is
///     received.
/// </summary>
/// <param name="callback">The callback function invoked when a Device Twin update is
/// received</param>
void AzureIoT_SetDeviceTwinUpdateCallback(TwinUpdateFnType callback);

/// <summary>
///     Type of the function callback invoked when a Direct Method call from the IoT Hub is
///     received.
/// </summary>
/// <param name="directMethodName">The name of the direct method to invoke</param>
/// <param name="payload">The payload of the direct method call</param>
/// <param name="payloadSize">The payload size of the direct method call</param>
/// <param name="responsePayload">The payload of the response provided by the callee. It must be
/// either NULL or an heap allocated string.</param>
/// <param name="responsePayloadSize">The size of the response payload provided by the
/// callee.</param>
/// <returns>The HTTP status code. e.g. 404 for method not found.</returns>
typedef int (*DirectMethodCallFnType)(const char *directMethodName, const char *payload,
                                      size_t payloadSize, char **responsePayload,
                                      size_t *responsePayloadSize);

/// <summary>
///     Sets the function to be invoked whenever a Direct Method call from the IoT Hub is received.
/// </summary>
/// <param name="callback">The callback function invoked when a Direct Method call is
/// received</param>
void AzureIoT_SetDirectMethodCallback(DirectMethodCallFnType callback);

/// <summary>
///     Type of the function callback invoked when the IoT Hub connection status changes.
/// </summary>
typedef void (*ConnectionStatusFnType)(bool connected);

/// <summary>
///     Sets the function to be invoked whenever the connection status to thye IoT Hub changes.
/// </summary>
/// <param name="callback">The callback function invoked when Azure IoT Hub network connection
/// status changes.</param>
void AzureIoT_SetConnectionStatusCallback(ConnectionStatusFnType callback);

/// <summary>
///     Type of the function callback invoked to report whether a message sent to the IoT Hub has
///     been successfully delivered or not.
/// </summary>
/// <param name="delivered">'true' when the message has been successfully delivered.</param>
typedef void (*MessageDeliveryConfirmationFnType)(bool delivered);

/// <summary>
///     Sets the function to be invoked whenever the message to the Iot Hub has been delivered.
/// </summary>
/// <param name="callback">The function pointer to the callback function.</param>
void AzureIoT_SetMessageConfirmationCallback(MessageDeliveryConfirmationFnType callback);

/// <summary>
///     Type of the function callback invoked to report whether the Device Twin properties
///     to the IoT Hub have been successfully delivered.
/// </summary>
/// <param name="httpStatusCode">The HTTP status code returned by the IoT Hub.</param>
typedef void (*DeviceTwinDeliveryConfirmationFnType)(int httpStatusCode);

/// <summary>
///     Sets the function to be invoked whenever the Device Twin properties have been delivered to
///     the IoT Hub.
/// </summary>
/// <param name="callback">The function pointer to the callback function.</param>
void AzureIoT_SetDeviceTwinDeliveryConfirmationCallback(
    DeviceTwinDeliveryConfirmationFnType callback);

/// <summary>
///     Initializes the Azure IoT Hub SDK.
/// </summary>
/// <return>'true' if initialization has been successful.</param>
bool AzureIoT_Initialize(void);

/// <summary>
///     Deinitializes the Azure IoT Hub SDK.
/// </summary>
void AzureIoT_Deinitialize(void);
