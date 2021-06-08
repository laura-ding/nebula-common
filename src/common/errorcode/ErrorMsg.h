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
            { Language::L_EN, "Succeeded." }
        }
    },
    {
        ErrorCode::E_GRAPH_SCHEMA_TAG_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The tag `%s' does not exist or it is not synchronized to the graph yet. "
                "Double check the tag name and try again later."
            }
        }
    },
    {
        ErrorCode::E_GRAPH_SCHEMA_EDGE_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The edge `%s' does not exist or it is not synchronized to the graph yet. "
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
        ErrorCode::E_STORAGE_SCHEMA_TAG_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The tag `%s' does not exist or it is not synchronized to the storage yet. "
                "Double check the tag name and try again later."
            }
        }
    },
    {
        ErrorCode::E_STORAGE_SCHEMA_EDGE_NOT_FOUND,
        {
            {
                Language::L_EN,
                "The edge `%s' does not exist or it is not synchronized to the storage yet. "
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
};

}   // namespace nebula

#endif  // COMMON_ERRORCODE_ERRORMSG_H
