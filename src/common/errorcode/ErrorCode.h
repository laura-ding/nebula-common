/* Copyright (c) 2021 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#ifndef COMMON_ERRORCODE_ERRORCODE_H
#define COMMON_ERRORCODE_ERRORCODE_H

/**
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
 * The moduleId of
 */

namespace nebula {
enum class ErrorCode : int32_t {
    SUCCEEDED = 0,

    // The ErrorCode for graph
    // prefix: 1001
    E_GRAPH_SCHEMA_TAG_NOT_FOUND = 10070001,
    E_GRAPH_SCHEMA_EDGE_NOT_FOUND = 10070002,

    // prefix: 1004
    E_GRAPH_SCHEMA_TAG_INDEX_NOT_FOUND = 10040001,
    E_GRAPH_SCHEMA_EDGE_INDEX_NOT_FOUND = 10040002,

    // The ErrorCode for meta
    // prefix: 2007
    E_META_SCHEMA_TAG_NOT_FOUND = 20070001,
    E_META_SCHEMA_EDGE_NOT_FOUND = 20070002,

    // prefix: 2004
    E_META_SCHEMA_TAG_INDEX_NOT_FOUND = 20070001,
    E_META_SCHEMA_EDGE_INDEX_NOT_FOUND = 20070002,

    // The ErrorCode for storage
    // prefix: 2007
    E_STORAGE_SCHEMA_TAG_NOT_FOUND = 30010001,
    E_STORAGE_SCHEMA_EDGE_NOT_FOUND = 30010002,

    // prefix: 2004
    E_STORAGE_SCHEMA_TAG_INDEX_NOT_FOUND = 30070001,
    E_STORAGE_SCHEMA_EDGE_INDEX_NOT_FOUND = 30070002,
};

}   // namespace nebula
#endif  // COMMON_ERRORCODE_ERRORCODE_H
