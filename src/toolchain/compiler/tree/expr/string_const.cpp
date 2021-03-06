#include "string_const.h"

/////////////////////
// String constant //
/////////////////////
StringConstNode::StringConstNode( const string &s ):value(s){
	sem_type=Type::string_type;
}

TNode *StringConstNode::translate( Codegen *g ){
	string lab=genLabel();
	g->s_data( value,lab );
	return call( "__bbStrConst",global( lab ) );
}

#ifdef USE_LLVM
llvm::Value *StringConstNode::translate2( Codegen_LLVM *g ){
	auto arg=g->builder->CreateGlobalStringPtr(value);
	return g->CallIntrinsic( "_bbStrConst",sem_type->llvmType( &g->context ),1,arg );
}
#endif

int StringConstNode::intValue(){
	return atoi( value );
}

float StringConstNode::floatValue(){
	return (float)atof( value );
}

string StringConstNode::stringValue(){
	return value;
}

json StringConstNode::toJSON( Environ *e ){
	json tree;tree["@class"]="StringConstNode";
	tree["sem_type"]=sem_type->toJSON();
	tree["value"]=value;
	return tree;
}
