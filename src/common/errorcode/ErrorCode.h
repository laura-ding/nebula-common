/* Copyright (c) 2021 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#ifndef COMMON_ERRORCODE_ERRORCODE_H
#define COMMON_ERRORCODE_ERRORCODE_H

/**
 * net error format:
 * file error format:
 * config error format:
 * process error format:
 * time value error format:
 * function expression error format:
 * agg function expression error format:
 * fulltext function error format:
 *
 * name format: E_<ServiceName>_<ModuleName>_<ErrorName>
 * id format: ServiceId(1~3) * 10000000 + ModuleId(001~999) * 10000 + ErrorId(0001~9999)
 * The serviceId of graph is 1
 * The serviceId of meta is 2
 * The serviceId of storage is 3
 * 
 * The moduleId of rpc is 001
 * The moduleId of admin is 002
 * The moduleId of config is 003
 * The moduleId of index is 004
 * The moduleId of job is 005
 * The moduleId of listener is 006
 * The moduleId of schema is 007
 * The moduleId of session is 008
 * The moduleId of user is 009
 * The moduleId of zone is 010
 * The moduleId of rpc is 011
 * The moduleId of raft is 012
 * The moduleId of parser is 013
 * The moduleId of semantic is 014
 * The moduleId of data is 015
 * The moduleId of permission is 016
 * The moduleId of rocksdb is 017
 * The moduleId of stat is 018
 * The moduleId of es is 019
 */

namespace nebula {
enum class ErrorCode : int32_t {
    SUCCEEDED = 0,

    E_RPC_FAILED = 1,
    E_LEADER_CHANGED = 2,
    // The system error code, 1~200
    E_SIGNAL_ERROR = 1,
    E_INIT_MEM_FAILED = 2,
    E_FILESYSTEM_CALL_FAILED = 3,
    E_FILE_NOT_FOUND = 4,
    E_FILE_NOT_PERMISSION = 5,
    E_FILE_CONTENT_IS_EMPTY = 6,
    E_SYSTEM_CALL_FAILED = 12,

    E_CONFIG_ITEM_NOT_FOUND = 7,
    E_CONFIG_ITEM_IS_NO_ARRAY = 8,
    E_CONFIG_INVALID_ITEM_TYPE = 9,
    E_CONFIG_WRONG_JSON_FORMAT = 10,

    E_NET_GET_IPV4_FAILED = 11,
    E_NET_HOST_NOT_FOUND = 13,
    E_NET_BAD_IP = 14,
    E_NET_BAD_PORT = 15,

    E_PROCESS_RUN_COMMAND_FAILED = 16,
    E_PROCESS_READ_COMMAND_RESULT_FAILED = 17,
    E_PROCESS_NOT_AVAILABLE_PID = 18,
    E_PROCESS_CREATE_PID_FAILED = 19,

    E_STATS_INVALID_NAME = 20,

    E_METAD_NOT_READY = 21,

    // Time format error, 201~400
    E_INVALID_TIME_FORMAT = 201,
    E_INVALID_DATA_TYPE = 202,
    E_EMPTY_TIMEZONE = 6,
    E_INVALID_TIMEZONE = 7,

    // Charset error
    E_CHARSET_NOT_SUPPORTED = 8,
    E_COLLATION_NOT_SUPPORTED = 9,
    E_CHARSET_AND_COLLATION_NOT_MATCH = 10,

    // Function error
    E_FUNCTION_NOT_SUPPORTED = 11,
    E_FUNCTION_DYNAMIC_NOT_SUPPORTED = 12,
    E_FUNCTION_ARITY_NOT_MATCH = 13,
    E_FUNCTION_INVALID_ARG_TYPE = 14,

    // Agg Function error
    E_AGG_FUNCTION_NOT_SUPPORTED = 11,
    E_AGG_FUNCTION_DYNAMIC_NOT_SUPPORTED = 12,

    E_KV_ARGUMENTS_INVALID = 30,

    E_SPACE_INVALID_VID_LEN = 31,

    E_INVALID_VID_TYPE = 32,

    E_TTL_NOT_SET = 33,
    E_TTL_INVALID_PROPERTY = 34,

    E_SCHEMA_ID_NOT_FOUND = 35,
    E_SCHEMA_NAME_NOT_FOUND = 36,

    E_FULLTEXT_INDEX_ID_NOT_FOUND = 37,
    E_FULLTEXT_INDEX_NAME_NOT_FOUND = 38,
    E_FULLTEXT_CLIENT_IS_EMPTY = 39,
    E_LISTENER_NOT_FOUND = 40,


    // The ErrorCode for graph
    // prefix: 1001
    E_GRAPH_SCHEMA_TAG_ID_NOT_FOUND = 10070001,
    E_GRAPH_SCHEMA_EDGE_ID_NOT_FOUND = 10070002,
    // prefix: 1001
    E_GRAPH_SCHEMA_TAG_NAME_NOT_FOUND = 10070003,
    E_GRAPH_SCHEMA_EDGE_NAME_NOT_FOUND = 10070004,

    // prefix: 1004
    E_GRAPH_INDEX_TAG_INDEX_ID_NOT_FOUND = 10040001,
    E_GRAPH_INDEX_EDGE_INDEX_ID_NOT_FOUND = 10040002,
    E_GRAPH_INDEX_TAG_INDEX_NAME_NOT_FOUND = 10040003,
    E_GRAPH_INDEX_EDGE_INDEX_NAME_NOT_FOUND = 10040004,

    // prefix: 1002
    E_GRAPH_SPACE_ID_NOT_FOUND = 10020001,
    E_GRAPH_SPACE_NAME_NOT_FOUND = 10020002,

    // prefix: 1019
    E_GRAPH_ES_RUN_COMMAND_FAILED = 10190001,

    // The ErrorCode for meta
    // prefix: 2007
    E_META_SCHEMA_TAG_NOT_FOUND = 20070001,
    E_META_SCHEMA_EDGE_NOT_FOUND = 20070002,

    // prefix: 2004
    E_META_SCHEMA_TAG_INDEX_NOT_FOUND = 20070001,
    E_META_SCHEMA_EDGE_INDEX_NOT_FOUND = 20070002,

    // prefix: 2002
    E_GRAPH_SPACE_NOT_FOUND = 20020001,

    // The ErrorCode for storage
    // prefix: 3007
    E_STORAGE_SCHEMA_TAG_ID_NOT_FOUND = 30010001,
    E_STORAGE_SCHEMA_EDGE_ID_NOT_FOUND = 30010002,
    E_STORAGE_SCHEMA_TAG_NAME_NOT_FOUND = 30010003,
    E_STORAGE_SCHEMA_EDGE_NAME_NOT_FOUND = 30010004,

    // prefix: 3004
    E_STORAGE_INDEX_TAG_INDEX_ID_NOT_FOUND = 30070001,
    E_STORAGE_INDEX_EDGE_INDEX_ID_NOT_FOUND = 30070002,
    E_STORAGE_INDEX_TAG_INDEX_NAME_NOT_FOUND = 30070003,
    E_STORAGE_INDEX_EDGE_INDEX_NAME_NOT_FOUND = 30070004,

    // prefix: 3002
    E_STORAGE_SPACE_ID_NOT_FOUND = 30020001,
    E_STORAGE_SPACE_NAME_NOT_FOUND = 30020002,
    E_STORAGE_PART_ID_NOT_FOUND = 30020003,

    // prefix: 1019
    E_STORAGE_ES_RUN_COMMAND_FAILED = 30190001,

    E_INTERNAL_ERROR = -1,
    E_UNSUPPORTED = -2,
};

}   // namespace nebula
#endif  // COMMON_ERRORCODE_ERRORCODE_H
