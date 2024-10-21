final specifier can be used for two reasons:
    ->To stop deriving any classes from the class which has used final specifier
    ->To stop overriding the functions


class My_class final{};
clas Derived final:public Base{};

virtual void fun1() final {}