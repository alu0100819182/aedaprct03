{"filter":false,"title":"pila_excepciones.hpp","tooltip":"/ejecucion/pila_excepciones.hpp","undoManager":{"mark":8,"position":8,"stack":[[{"start":{"row":0,"column":0},"end":{"row":99,"column":2},"action":"insert","lines":["#pragma once","#include \"sll_t.hpp\"","","#include <iostream>","#include <iomanip>","","#include <exception>","","#define STACK_LIMIT_DEFAULT 100","","using namespace std;","","class stack_exception_t: public exception","{","};","","class empty_stack_exception: public stack_exception_t","{","public:","\tvirtual const char* what(void) const throw ()","\t{","\t\treturn \"Stack template exception: empty stack\";","\t}","};","","class stack_overflow_exception: public stack_exception_t","{","public:","\tvirtual const char* what(void) const throw ()","\t{","\t\treturn \"Stack template exception: stack overflow\";","\t}","};","","template <class T>","class stack_item_t: public sll_item_t {","private:","\tT dato_;","","public:","\tstack_item_t(T dato):","\tsll_item_t(),","\tdato_(dato){}","","\tT get_dato(void) {return dato_;}","","\tvirtual ~stack_item_t(void) {}","}; ","","","template <class T>","class stack_template_t: public sll_t{","","\tint stack_limit_;","","public:","\tstack_template_t(void): ","\tsll_t(),","\tstack_limit_(STACK_LIMIT_DEFAULT) {}","","\tstack_template_t(int stack_limit): ","\tsll_t(),","\tstack_limit_(stack_limit) {}","","\tvirtual ~stack_template_t(void) {}","","\tvoid push(T dato)","\t{","\t\tif (size() >= stack_limit_)","\t\t\tthrow stack_overflow_exception();","","\t\tstack_item_t<T>* ptr = new stack_item_t<T>(dato);","\t\t","\t\tif (!ptr)","\t\t\tthrow bad_alloc();","","\t\tpush_back(ptr);","  }","\t\t","\tT pop(void)","\t{","\t\tif (empty())","\t\t\tthrow empty_stack_exception();","","\t\tstack_item_t<T>* dato_ptr = (stack_item_t<T>*)(pop_back());","","\t\tT dato = dato_ptr->get_dato();","\t\tdelete dato_ptr;","","\t\treturn dato;","\t}","\t","\tbool empty(void)","\t{","\t\treturn sll_t::empty();","  }","","\t//void write(ostream& os);","","};"],"id":1}],[{"start":{"row":6,"column":20},"end":{"row":7,"column":0},"action":"remove","lines":["",""],"id":2}],[{"start":{"row":4,"column":18},"end":{"row":5,"column":0},"action":"remove","lines":["",""],"id":3}],[{"start":{"row":1,"column":20},"end":{"row":2,"column":0},"action":"remove","lines":["",""],"id":4}],[{"start":{"row":30,"column":0},"end":{"row":96,"column":2},"action":"remove","lines":["","template <class T>","class stack_item_t: public sll_item_t {","private:","\tT dato_;","","public:","\tstack_item_t(T dato):","\tsll_item_t(),","\tdato_(dato){}","","\tT get_dato(void) {return dato_;}","","\tvirtual ~stack_item_t(void) {}","}; ","","","template <class T>","class stack_template_t: public sll_t{","","\tint stack_limit_;","","public:","\tstack_template_t(void): ","\tsll_t(),","\tstack_limit_(STACK_LIMIT_DEFAULT) {}","","\tstack_template_t(int stack_limit): ","\tsll_t(),","\tstack_limit_(stack_limit) {}","","\tvirtual ~stack_template_t(void) {}","","\tvoid push(T dato)","\t{","\t\tif (size() >= stack_limit_)","\t\t\tthrow stack_overflow_exception();","","\t\tstack_item_t<T>* ptr = new stack_item_t<T>(dato);","\t\t","\t\tif (!ptr)","\t\t\tthrow bad_alloc();","","\t\tpush_back(ptr);","  }","\t\t","\tT pop(void)","\t{","\t\tif (empty())","\t\t\tthrow empty_stack_exception();","","\t\tstack_item_t<T>* dato_ptr = (stack_item_t<T>*)(pop_back());","","\t\tT dato = dato_ptr->get_dato();","\t\tdelete dato_ptr;","","\t\treturn dato;","\t}","\t","\tbool empty(void)","\t{","\t\treturn sll_t::empty();","  }","","\t//void write(ostream& os);","","};"],"id":5}],[{"start":{"row":1,"column":0},"end":{"row":1,"column":20},"action":"remove","lines":["#include \"sll_t.hpp\""],"id":6}],[{"start":{"row":0,"column":12},"end":{"row":1,"column":0},"action":"remove","lines":["",""],"id":7}],[{"start":{"row":4,"column":0},"end":{"row":4,"column":31},"action":"remove","lines":["#define STACK_LIMIT_DEFAULT 100"],"id":8}],[{"start":{"row":3,"column":20},"end":{"row":4,"column":0},"action":"remove","lines":["",""],"id":9}]]},"ace":{"folds":[],"scrolltop":120,"scrollleft":0,"selection":{"start":{"row":3,"column":20},"end":{"row":3,"column":20},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":19,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1459290620000,"hash":"6864dda439ed2929451ef1a2ba352e589c3d8227"}