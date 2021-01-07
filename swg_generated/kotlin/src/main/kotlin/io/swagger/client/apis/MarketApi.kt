/**
* Upbit Open API
* ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
*
* OpenAPI spec version: 1.1.6
* Contact: ujhin942@gmail.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/
package io.swagger.client.apis

import io.swagger.client.models.Error

import io.swagger.client.infrastructure.*

class MarketApi(basePath: kotlin.String = "https://api.upbit.com/v1") : ApiClient(basePath) {

    /**
    * 마켓 코드 조회
    * ## 업비트에서 거래 가능한 마켓 목록 
    * @param isDetails 유의종목 필드과 같은 상세 정보 노출 여부(선택 파라미터)  (optional, default to false)
    * @return kotlin.Any
    */
    @Suppress("UNCHECKED_CAST")
    fun market.infoAll(isDetails: kotlin.Boolean) : kotlin.Any {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: MultiValueMap = mapOf("isDetails" to listOf("$isDetails"))
        
        val contentHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val acceptsHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf("Accept" to "application/json")
        val localVariableHeaders: kotlin.collections.MutableMap<kotlin.String,kotlin.String> = mutableMapOf()
        localVariableHeaders.putAll(contentHeaders)
        localVariableHeaders.putAll(acceptsHeaders)
        
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/market/all",
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<kotlin.Any>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as kotlin.Any
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

}
