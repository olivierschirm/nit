#include "nit.common.h"
extern const int COLOR_flow__ToolContext___64dflow_phase;
val* flow__ToolContext__flow_phase(val* self);
void flow__ToolContext__flow_phase_61d(val* self, val* p0);
extern const int COLOR_phase__Phase__toolcontext;
extern const int COLOR_flow__APropdef__do_flow;
void flow__FlowPhase__process_npropdef(val* self, val* p0);
extern const int COLOR_flow__FlowVisitor___64dcurrent_flow_context;
val* flow__FlowVisitor__current_flow_context(val* self);
void flow__FlowVisitor__current_flow_context_61d(val* self, val* p0);
extern const int COLOR_flow__FlowVisitor___64dtoolcontext;
val* flow__FlowVisitor__toolcontext(val* self);
void flow__FlowVisitor__toolcontext_61d(val* self, val* p0);
extern const int COLOR_parser_nodes__Visitor__init;
extern const int COLOR_flow__FlowVisitor__toolcontext_61d;
val* NEW_flow__FlowContext(const struct type* type);
extern const struct type type_flow__FlowContext;
extern const int COLOR_flow__FlowContext__init;
extern const int COLOR_flow__FlowVisitor__current_flow_context_61d;
extern const int COLOR_flow__FlowVisitor__flows;
extern const int COLOR_flow__FlowVisitor__current_flow_context;
extern const int COLOR_abstract_collection__SimpleCollection__add;
extern const int COLOR_flow__FlowContext__is_start_61d;
void flow__FlowVisitor__init(val* self, val* p0);
extern const int COLOR_flow__FlowVisitor___64dfirst;
val* flow__FlowVisitor__first(val* self);
void flow__FlowVisitor__first_61d(val* self, val* p0);
extern const int COLOR_flow__FlowVisitor__first;
extern const int COLOR_flow__FlowVisitor__first_61d;
extern const int COLOR_flow__FlowContext__node;
extern const int COLOR_flow__FlowContext__node_61d;
extern const int COLOR_flow__ANode__accept_flow_visitor;
extern const struct type type_parser_nodes__AExpr;
extern const int COLOR_flow__AExpr__after_flow_context_61d;
extern const int COLOR_flow__FlowContext__when_true;
extern const int COLOR_kernel__Object___33d_61d;
extern const int COLOR_flow__FlowContext__when_false;
extern const int COLOR_flow__FlowVisitor__make_sub_flow;
val* string__NativeString__to_s_with_length(char* self, long p0);
extern const int COLOR_flow__FlowContext__name_61d;
extern const int COLOR_kernel__Object___61d_61d;
void flow__FlowVisitor__visit(val* self, val* p0);
extern const int COLOR_parser_nodes__Visitor__enter_visit;
extern const int COLOR_flow__AExpr__after_flow_context;
val* flow__FlowVisitor__visit_expr(val* self, val* p0);
extern const int COLOR_flow__FlowVisitor___64dflows;
val* flow__FlowVisitor__flows(val* self);
void flow__FlowVisitor__flows_61d(val* self, val* p0);
val* NEW_file__OFStream(const struct type* type);
extern const struct type type_file__OFStream;
extern const int COLOR_file__OFStream__open;
extern const int COLOR_stream__OStream__write;
extern const int COLOR_abstract_collection__Collection__iterator;
extern const int COLOR_abstract_collection__Iterator__is_ok;
extern const int COLOR_abstract_collection__Iterator__item;
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
extern const int COLOR_array__Array__with_capacity;
extern const int COLOR_kernel__Object__object_id;
extern const int COLOR_string__Object__to_s;
extern const int COLOR_parser_nodes__ANode__location;
extern const int COLOR_string__Object__class_name;
extern const int COLOR_flow__FlowContext__name;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
extern const int COLOR_array__Array__with_native;
extern const int COLOR_flow__FlowContext__previous;
extern const int COLOR_abstract_collection__Iterator__next;
extern const int COLOR_stream__IOS__close;
void flow__FlowVisitor__printflow(val* self);
extern const int COLOR_parser_nodes__Visitor__current_node;
extern const int COLOR_flow__FlowContext__add_previous;
val* flow__FlowVisitor__make_sub_flow(val* self);
val* flow__FlowVisitor__make_merge_flow(val* self, val* p0, val* p1);
extern const int COLOR_flow__FlowContext__when_true_61d;
extern const int COLOR_flow__FlowContext__when_false_61d;
val* flow__FlowVisitor__make_true_false_flow(val* self, val* p0, val* p1);
extern const int COLOR_flow__FlowVisitor__make_true_false_flow;
val* flow__FlowVisitor__make_sub_true_false_flow(val* self);
extern const int COLOR_flow__FlowContext__is_marked_unreachable_61d;
val* flow__FlowVisitor__make_unreachable_flow(val* self);
extern const int COLOR_scope__EscapeMark__continues;
extern const int COLOR_flow__AContinueExpr__before_flow_context;
extern const int COLOR_flow__FlowContext__add_loop;
void flow__FlowVisitor__merge_continues_to(val* self, val* p0, val* p1);
extern const int COLOR_scope__EscapeMark__breaks;
extern const int COLOR_flow__ABreakExpr__before_flow_context;
extern const int COLOR_flow__FlowVisitor__make_merge_flow;
void flow__FlowVisitor__merge_breaks(val* self, val* p0);
extern const int COLOR_flow__FlowContext___64dprevious;
val* flow__FlowContext__previous(val* self);
void flow__FlowContext__previous_61d(val* self, val* p0);
extern const int COLOR_flow__FlowContext___64dloops;
val* flow__FlowContext__loops(val* self);
void flow__FlowContext__loops_61d(val* self, val* p0);
extern const int COLOR_flow__FlowContext___64dis_marked_unreachable;
short int flow__FlowContext__is_marked_unreachable(val* self);
void flow__FlowContext__is_marked_unreachable_61d(val* self, short int p0);
extern const int COLOR_flow__FlowContext__is_marked_unreachable;
extern const int COLOR_flow__FlowContext__is_start;
extern const int COLOR_abstract_collection__Collection__length;
short int flow__FlowContext__is_unreachable(val* self);
extern const int COLOR_flow__FlowContext___64dis_already_unreachable;
short int flow__FlowContext__is_already_unreachable(val* self);
void flow__FlowContext__is_already_unreachable_61d(val* self, short int p0);
extern const int COLOR_flow__FlowContext___64dis_start;
short int flow__FlowContext__is_start(val* self);
void flow__FlowContext__is_start_61d(val* self, short int p0);
extern const int COLOR_flow__FlowContext___64dnode;
val* flow__FlowContext__node(val* self);
void flow__FlowContext__node_61d(val* self, val* p0);
extern const int COLOR_flow__FlowContext___64dname;
val* flow__FlowContext__name(val* self);
void flow__FlowContext__name_61d(val* self, val* p0);
extern const int COLOR_flow__FlowContext___64dwhen_true;
val* flow__FlowContext__when_true(val* self);
void flow__FlowContext__when_true_61d(val* self, val* p0);
extern const int COLOR_flow__FlowContext___64dwhen_false;
val* flow__FlowContext__when_false(val* self);
void flow__FlowContext__when_false_61d(val* self, val* p0);
extern const int COLOR_flow__FlowContext__is_unreachable;
extern const int COLOR_abstract_collection__Collection__has;
void flow__FlowContext__add_previous(val* self, val* p0);
extern const int COLOR_flow__FlowContext__loops;
void flow__FlowContext__add_loop(val* self, val* p0);
void flow__FlowContext__init(val* self);
extern const int COLOR_parser_nodes__ANode__visit_all;
void flow__ANode__accept_flow_visitor(val* self, val* p0);
val* NEW_flow__FlowVisitor(const struct type* type);
extern const struct type type_flow__FlowVisitor;
extern const int COLOR_flow__FlowVisitor__init;
void flow__APropdef__do_flow(val* self, val* p0);
extern const int COLOR_flow__APropdef___64dbefore_flow_context;
val* flow__APropdef__before_flow_context(val* self);
void flow__APropdef__before_flow_context_61d(val* self, val* p0);
extern const int COLOR_flow__APropdef___64dafter_flow_context;
val* flow__APropdef__after_flow_context(val* self);
void flow__APropdef__after_flow_context_61d(val* self, val* p0);
extern const int COLOR_flow__APropdef__before_flow_context_61d;
extern const int COLOR_flow__APropdef__accept_flow_visitor;
extern const int COLOR_flow__APropdef__after_flow_context_61d;
void flow__APropdef__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_flow__AExpr___64dafter_flow_context;
val* flow__AExpr__after_flow_context(val* self);
void flow__AExpr__after_flow_context_61d(val* self, val* p0);
extern const int COLOR_flow__AVarAssignExpr__accept_flow_visitor;
void flow__AVarAssignExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_flow__AReassignFormExpr__accept_flow_visitor;
void flow__AReassignFormExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_parser_nodes__ABlockExpr__n_expr;
extern const int COLOR_flow__FlowContext__is_already_unreachable;
extern const int COLOR_flow__FlowContext__is_already_unreachable_61d;
extern const int COLOR_flow__FlowVisitor__toolcontext;
extern const int COLOR_parser_nodes__ANode__hot_location;
extern const int COLOR_toolcontext__ToolContext__error;
void flow__ABlockExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_flow__AReturnExpr__accept_flow_visitor;
extern const int COLOR_flow__FlowVisitor__make_unreachable_flow;
void flow__AReturnExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_abstract_collection__Collection__first;
val* flow__AContinueExpr__before_flow_context(val* self);
extern const int COLOR_flow__AContinueExpr__accept_flow_visitor;
void flow__AContinueExpr__accept_flow_visitor(val* self, val* p0);
val* flow__ABreakExpr__before_flow_context(val* self);
extern const int COLOR_flow__ABreakExpr__accept_flow_visitor;
void flow__ABreakExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_flow__AAbortExpr__accept_flow_visitor;
void flow__AAbortExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_flow__ADoExpr__accept_flow_visitor;
extern const int COLOR_scope__ADoExpr__escapemark;
extern const int COLOR_flow__FlowVisitor__merge_breaks;
void flow__ADoExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_parser_nodes__AIfExpr__n_expr;
extern const int COLOR_flow__FlowVisitor__visit_expr;
extern const int COLOR_parser_nodes__AIfExpr__n_then;
extern const int COLOR_parser_nodes__AIfExpr__n_else;
void flow__AIfExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_parser_nodes__AIfexprExpr__n_expr;
extern const int COLOR_parser_nodes__AIfexprExpr__n_then;
extern const int COLOR_parser_nodes__AIfexprExpr__n_else;
void flow__AIfexprExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_parser_nodes__AWhileExpr__n_expr;
extern const int COLOR_parser_nodes__AWhileExpr__n_block;
extern const int COLOR_scope__AWhileExpr__escapemark;
extern const int COLOR_flow__FlowVisitor__merge_continues_to;
void flow__AWhileExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_parser_nodes__ALoopExpr__n_block;
extern const int COLOR_scope__ALoopExpr__escapemark;
void flow__ALoopExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_parser_nodes__AForExpr__n_expr;
extern const int COLOR_parser_nodes__AForExpr__n_block;
extern const int COLOR_scope__AForExpr__escapemark;
void flow__AForExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_parser_nodes__AAssertExpr__n_expr;
extern const int COLOR_parser_nodes__AAssertExpr__n_else;
void flow__AAssertExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_parser_nodes__AOrExpr__n_expr;
extern const int COLOR_parser_nodes__AOrExpr__n_expr2;
void flow__AOrExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_parser_nodes__AImpliesExpr__n_expr;
extern const int COLOR_parser_nodes__AImpliesExpr__n_expr2;
void flow__AImpliesExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_parser_nodes__AAndExpr__n_expr;
extern const int COLOR_parser_nodes__AAndExpr__n_expr2;
void flow__AAndExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_parser_nodes__ANotExpr__n_expr;
void flow__ANotExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_flow__AOrElseExpr__accept_flow_visitor;
void flow__AOrElseExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_flow__AEqExpr__accept_flow_visitor;
extern const int COLOR_flow__FlowVisitor__make_sub_true_false_flow;
void flow__AEqExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_flow__ANeExpr__accept_flow_visitor;
void flow__ANeExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_flow__AIsaExpr__accept_flow_visitor;
void flow__AIsaExpr__accept_flow_visitor(val* self, val* p0);
extern const int COLOR_parser_nodes__AProxyExpr__n_expr;
void flow__AProxyExpr__accept_flow_visitor(val* self, val* p0);
