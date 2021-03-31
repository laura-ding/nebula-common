/* Copyright (c) 2020 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#ifndef COMMON_EXPRESSION_EDGEEXPRESSION_H_
#define COMMON_EXPRESSION_EDGEEXPRESSION_H_

#include "common/expression/Expression.h"

namespace nebula {

/**
 * This is an internal type of expression to denote a Edge value.
 * It has no corresponding rules in parser.
 * It is generated from LabelExpression during semantic analysis
 * and expression rewrite.
 */
class EdgeExpression final : public Expression {
public:
    EdgeExpression() : Expression(Kind::kEdge) {
        outPutName_.reset(new std::string("EDGE"));
    }

    explicit EdgeExpression(std::string* name) : Expression(Kind::kEdge) {
        outPutName_.reset(name);
    }

    const Value& eval(ExpressionContext &ctx) override;

    void accept(ExprVisitor *visitor) override;

    std::unique_ptr<Expression> clone() const override {
        return std::make_unique<EdgeExpression>();
    }

    std::string toString() const override {
        return *outPutName_;
    }

    bool operator==(const Expression &expr) const override {
        return kind() == expr.kind();
    }

private:
    void writeTo(Encoder &encoder) const override {
        encoder << kind();
    }

    void resetFrom(Decoder&) override {}

private:
    Value                                   result_;
    std::unique_ptr<std::string>            outPutName_;
};

}   // namespace nebula

#endif  // COMMON_EXPRESSION_EDGEEXPRESSION_H_
