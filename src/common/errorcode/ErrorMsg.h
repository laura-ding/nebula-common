/* Copyright (c) 2021 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#ifndef COMMON_ERRORCODE_ERRORMSG_H
#define COMMON_ERRORCODE_ERRORMSG_H

#include <unordered_map>

#include "common/errorcode/ErrorCode.h"

namespace nebula {

enum class Language : uint8_t {
    L_EN = 1,
};

static const std::unordered_map<ErrorCode, std::unordered_map<Language, std::string>>
ErrorMsgUTF8Map = {
    {
        ErrorCode::SUCCEEDED,
        {
            {
                Language::L_EN,
                "Succeeded."
            }
        }
    },
    {
        ErrorCode::E_RPC_FAILED,
        {
            {
                Language::L_EN,
                "Rpc failed in `%s': %s."
            }
        }
    },
    {
        ErrorCode::E_METAD_NOT_READY,
        {
            {
                Language::L_EN,
                "Metad is not ready."
            }
        }
    },
    {
        ErrorCode::E_SIGNAL_ERROR,
        {
            {
                Language::L_EN,
                "Register signal %d failed: %s."
            }
        }
    },
    {
        ErrorCode::E_INIT_MEM_FAILED,
        {
            {
                Language::L_EN,
                "Fail to call sysinfo to get memory info, errno: %d."
            }
        }
    },
    {
        ErrorCode::E_FILESYSTEM_CALL_FAILED,
        {
            {
                Language::L_EN,
                "Fail to call filesystem function: %s."
            }
        }
    },
    {
        ErrorCode::E_FILE_NOT_FOUND,
        {
            {
                Language::L_EN,
                "File `%s' not found."
            }
        }
    },
    {
        ErrorCode::E_FILE_NOT_PERMISSION,
        {
            {
                Language::L_EN,
                "No permission to read file `%s'."
            }
        }
    },
    {
        ErrorCode::E_FILE_CONTENT_IS_EMPTY,
        {
            {
                Language::L_EN,
                "File `%s' is empty content."
            }
        }
    },
    {
        ErrorCode::E_CONFIG_ITEM_NOT_FOUND,
        {
            {
                Language::L_EN,
                "Config item `%s' not found."
            }
        }
    },
    {
        ErrorCode::E_CONFIG_ITEM_IS_NO_ARRAY,
        {
            {
                Language::L_EN,
                "Config item `%s' not an array."
            }
        }
    },
    {
        ErrorCode::E_CONFIG_INVALID_ITEM_TYPE,
        {
            {
                Language::L_EN,
                "Config item `%s' is not a `%s'."
            }
        }
    },
    {
        ErrorCode::E_CONFIG_WRONG_JSON_FORMAT,
        {
            {
                Language::L_EN,
                "Config Item `%s' is not an JSON object."
            }
        }
    },
    {
        ErrorCode::E_INVALID_TIME_FORMAT,
        {
            {
                Language::L_EN,
                "Invalid time format: %s."
            }
        }
    },
    {
        ErrorCode::E_INVALID_DATA_TYPE,
        {
            {
                Language::L_EN,
                "Invalid data type: %s."
            }
        }
    },
    {
        ErrorCode::E_EMPTY_TIMEZONE,
        {
            {
                Language::L_EN,
                "Empty timezone are not allowed."
            }
        }
    },
    {
        ErrorCode::E_CHARSET_NOT_SUPPORTED,
        {
            {
                Language::L_EN,
                "Charset `%s' not supported."
            }
        }
    },
    {
        ErrorCode::E_COLLATION_NOT_SUPPORTED,
        {
            {
                Language::L_EN,
                "Collation `%s' not supported."
            }
        }
    },
    {
        ErrorCode::E_CHARSET_AND_COLLATION_NOT_MATCH,
        {
            {
                Language::L_EN,
                "Charset `%s' and Collation `%s' not match."
            }
        }
    },
    {
        ErrorCode::E_FUNCTION_NOT_SUPPORTED,
        {
            {
                Language::L_EN,
                "Function `%s' not supported."
            }
        }
    },
    {
        ErrorCode::E_FUNCTION_DYNAMIC_NOT_SUPPORTED,
        {
            {
                Language::L_EN,
                "Dynamic function `%s' not supported."
            }
        }
    },
    {
        ErrorCode::E_FUNCTION_ARITY_NOT_MATCH,
        {
            {
                Language::L_EN,
                "Arity not match for function `%s': provided %lu but %lu expected."
            }
        }
    },
    {
        ErrorCode::E_FUNCTION_INVALID_ARG_TYPE,
        {
            {
                Language::L_EN,
                "Invalid args for function `%s'."
            }
        }
    },
    {
        ErrorCode::E_GRAPH_SCHEMA_TAG_ID_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The tag id `%d' does not exist or it is not synchronized to the graph yet. "
                "Double check the tag name and try again later."
            }
        }
    },
    {
        ErrorCode::E_GRAPH_SCHEMA_EDGE_ID_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The edge id `%d' does not exist or it is not synchronized to the graph yet. "
                "Double check the edge name and try again later."
            }
        }
    },
    {
        ErrorCode::E_GRAPH_SCHEMA_TAG_NAME_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The tag name `%s' does not exist or it is not synchronized to the graph yet. "
                "Double check the tag name and try again later."
            }
        }
    },
    {
        ErrorCode::E_GRAPH_SCHEMA_EDGE_NAME_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The edge name `%s' does not exist or it is not synchronized to the graph yet. "
                "Double check the edge name and try again later."
            }
        }
    },
    {
        ErrorCode::E_GRAPH_SCHEMA_TAG_INDEX_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The tag index `%s' does not exist or it is not synchronized to the graph yet. "
                "Double check the tag index name and try again later."
            }
        }
    },
    {
        ErrorCode::E_GRAPH_SCHEMA_EDGE_INDEX_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The edge index `%s' does not exist or it is not synchronized to the graph yet."
                "Double check the edge index name and try again later."
            }
        }
    },
    {
        ErrorCode::E_GRAPH_ES_RUN_COMMAND_FAILED,
        {
            {
                Language::L_EN,
                "Graph es run command `%s' failed."
            }
        }
    },
    {
        ErrorCode::E_META_SCHEMA_TAG_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The tag `%s' does not exist in metad."
            }
        }
    },
    {
        ErrorCode::E_META_SCHEMA_EDGE_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The edge `%s' does not exist in metad."
            }
        }
    },
    {
        ErrorCode::E_META_SCHEMA_TAG_INDEX_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The tag index `%s' does not exist in metad."
            }
        }
    },
    {
        ErrorCode::E_META_SCHEMA_EDGE_INDEX_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The edge index `%s' does not exist in metad."
            }
        }
    },
    {
        ErrorCode::E_STORAGE_SCHEMA_TAG_ID_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The tag id `%d' does not exist or it is not synchronized to the storage yet. "
                "Double check the tag name and try again later."
            }
        }
    },
    {
        ErrorCode::E_STORAGE_SCHEMA_EDGE_ID_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The edge id `%d' does not exist or it is not synchronized to the storage yet. "
                "Double check the edge name and try again later."
            }
        }
    },
    {
        ErrorCode::E_STORAGE_SCHEMA_TAG_NAME_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The tag name `%s' does not exist or it is not synchronized to the storage yet. "
                "Double check the tag name and try again later."
            }
        }
    },
    {
        ErrorCode::E_STORAGE_SCHEMA_EDGE_NAME_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The edge name `%s' does not exist or it is not synchronized to the storage yet. "
                "Double check the edge name and try again later."
            }
        }
    },
    {
        ErrorCode::E_STORAGE_SCHEMA_TAG_INDEX_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The tag index `%s' does not exist or it is not synchronized to the storage yet. "
                "Double check the tag index name and try again later." }
        }
    },
    {
        ErrorCode::E_STORAGE_SCHEMA_EDGE_INDEX_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The edge index `%s' does not exist or it is not synchronized to the storage yet. "
                "Double check the edge index name and try again later."
            }
        }
    },
    {
        ErrorCode::E_STORAGE_PART_ID_NOT_FOUND,
        {
            {
                Language::L_EN,
                "Part not found in cache, spaceId: %d, partId: %d or it is not synchronized to the storage yet. "
                "Double check the edge index name and try again later."
            }
        }
    },

    {
        ErrorCode::E_STORAGE_ES_RUN_COMMAND_FAILED,
        {
            {
                Language::L_EN,
                "Storage es run command `%s' failed."
            }
        }
    },
    {
        ErrorCode::E_INTERNAL_ERROR,
        {
            {
                Language::L_EN,
                "Internal error: %s."
            }
        }
    },
};

}   // namespace nebula

#endif  // COMMON_ERRORCODE_ERRORMSG_H
