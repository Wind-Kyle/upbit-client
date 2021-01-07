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
package io.swagger.client.models


/**
 * Error 상세 정보
 * @param message Error 메시지
 * @param name Error 명칭
 */
data class ErrorInfo (
    /* Error 메시지 */
    val message: kotlin.String? = null,
    /* Error 명칭 */
    val name: kotlin.String? = null
) {

}

