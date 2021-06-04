/* Copyright (c) 2021 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#ifndef COMMON_ERRORCODE_ERRORMSG_H
#define COMMON_ERRORCODE_ERRORMSG_H

namespace nebula {

static const std::unordered_map<ErrorCode, map<Language, std::string>> ErrorMsgUTF8Map = {
    {
        ErrorCode.SUCCEEDED,
        {
            { Language.L_EN, "Succeeded." }
        }
    },
    {
        ErrorCode.E_GRAPH_SCHEMA_TAG_NOT_FOUND,
        {
            { Language.L_EN, "The tag does not exist or it is not synchronized to the graph yet. Double check the tag name and try again later." }
        }
    },
    {
        ErrorCode.E_GRAPH_SCHEMA_EDGE_NOT_FOUND,
        {
            { Language.L_EN, "The edge does not exist or it is not synchronized to the graph yet. Double check the tag name and try again later." }
        }
    },
    {
        ErrorCode.E_GRAPH_SCHEMA_TAG_NOT_FOUND,
        {
            { Language.L_EN, "The tag does not exist or it is not synchronized to the graph yet. Double check the tag name and try again later." }
        }
    },
    {
        ErrorCode.E_GRAPH_SCHEMA_EDGE_NOT_FOUND,
        {
            { Language.L_EN, "The edge does not exist or it is not synchronized to the graph yet. Double check the tag name and try again later." }
        }
    },
    {
        ErrorCode.E_RPC_FAILED,
        {
            { Language.L_EN, "RPC failed." }
        }
    },
    {

        ErrorCode.E_LEADER_CHANGED, {
            { Language.L_EN, "The leader has changed. Try again later." }
        }
    },
}

}   // namespace nebula

#endif  // COMMON_ERRORCODE_ERRORMSG_H
