{"filter":false,"title":"stack_template.hpp","tooltip":"/stack_template.hpp","undoManager":{"mark":22,"position":22,"stack":[[{"start":{"row":0,"column":0},"end":{"row":54,"column":2},"action":"insert","lines":["#pragma once","#include \"sll_t.hpp\"","","#include <iostream>","#include <iomanip>","","using namespace std;","","template <class T>","class stack_item_t: public sll_item_t {","private:","\tT dato_;","public:","\tstack_item_t(T dato):","\tsll_item_t(),","\tdato_(dato){}","","\tT get_dato(void) {return dato_;}","","\tvirtual ~stack_item_t(void) {}","}; ","","","template <class T>","class stack_template_t: public sll_t{","","public:","\tstack_template_t(void): ","\tsll_t() {}","","\tvirtual ~stack_template_t(void) {}","","\tvoid push(T dato)","\t{","\t\tpush_back(new stack_item_t<T>(dato));","  }","\t\t","\tT pop(void)","\t{","\t\tstack_item_t<T>* dato_ptr = (stack_item_t<T>*)(pop_back());","","\t\tT dato = dato_ptr->get_dato();","\t\tdelete dato_ptr;","","\t\treturn dato;","\t}","\t","\tbool empty(void)","\t{","\t\treturn sll_t::empty();","  }","","\t//void write(ostream& os);","","};"],"id":1}],[{"start":{"row":10,"column":0},"end":{"row":10,"column":4},"action":"insert","lines":["    "],"id":2}],[{"start":{"row":11,"column":1},"end":{"row":11,"column":5},"action":"insert","lines":["    "],"id":3}],[{"start":{"row":12,"column":0},"end":{"row":12,"column":4},"action":"insert","lines":["    "],"id":4}],[{"start":{"row":13,"column":1},"end":{"row":13,"column":5},"action":"insert","lines":["    "],"id":5}],[{"start":{"row":14,"column":1},"end":{"row":14,"column":5},"action":"insert","lines":["    "],"id":6}],[{"start":{"row":15,"column":1},"end":{"row":15,"column":5},"action":"insert","lines":["    "],"id":7}],[{"start":{"row":15,"column":18},"end":{"row":16,"column":0},"action":"remove","lines":["",""],"id":8}],[{"start":{"row":16,"column":1},"end":{"row":16,"column":5},"action":"insert","lines":["    "],"id":9}],[{"start":{"row":16,"column":37},"end":{"row":17,"column":0},"action":"remove","lines":["",""],"id":10}],[{"start":{"row":17,"column":1},"end":{"row":17,"column":5},"action":"insert","lines":["    "],"id":11}],[{"start":{"row":22,"column":36},"end":{"row":23,"column":0},"action":"insert","lines":["",""],"id":12}],[{"start":{"row":9,"column":38},"end":{"row":10,"column":0},"action":"insert","lines":["",""],"id":13}],[{"start":{"row":24,"column":1},"end":{"row":25,"column":0},"action":"remove","lines":["",""],"id":14}],[{"start":{"row":27,"column":11},"end":{"row":28,"column":0},"action":"remove","lines":["",""],"id":15}],[{"start":{"row":28,"column":35},"end":{"row":29,"column":0},"action":"remove","lines":["",""],"id":16}],[{"start":{"row":32,"column":2},"end":{"row":32,"column":4},"action":"insert","lines":["  "],"id":17}],[{"start":{"row":36,"column":61},"end":{"row":37,"column":0},"action":"remove","lines":["",""],"id":18}],[{"start":{"row":38,"column":18},"end":{"row":39,"column":0},"action":"remove","lines":["",""],"id":19}],[{"start":{"row":45,"column":2},"end":{"row":45,"column":4},"action":"insert","lines":["  "],"id":20}],[{"start":{"row":47,"column":0},"end":{"row":47,"column":27},"action":"remove","lines":["\t//void write(ostream& os);"],"id":21}],[{"start":{"row":47,"column":0},"end":{"row":48,"column":0},"action":"remove","lines":["",""],"id":22}],[{"start":{"row":46,"column":0},"end":{"row":47,"column":0},"action":"remove","lines":["",""],"id":23}]]},"ace":{"folds":[],"scrolltop":240,"scrollleft":0,"selection":{"start":{"row":26,"column":1},"end":{"row":26,"column":23},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1457457067186,"hash":"c56ed3161acb80c49cace45025005e8784347b50"}