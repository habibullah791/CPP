<!-- INHERITANCE IN C++ OVERVIEW:-
-Reusability is a very important concept of oops.
-In C++ we reuse a class and add additional features in it.
-Reusing a class saves time and money.
-Reusing already tested and debugged class is saves our a lot of efforts.
-The property of reusability is using in C++ by inheritance.
-We use the properties of existing class by inheritance.
-BASE CLASS: existing class is base class.
-DERIVED CLASS: the new class which is inherited. -->
<!-- 
TYPES OF INHERITANCE:-
There are 5 types of inheritance.
1.SINGLE: A derived class with one base class. [A--->B]{A drives B}
<!-- 2.MULTIPLE: A derived class with more then one base class.
3.HIERARCHICAL:  Sevral derived classes with one base class.
4.MULTILEVEL: Derived a class with already derived class. [A-->B-->C]
<!-- 5.HYBRID: Mixer of multilevel and multiple inheritance.

<!--                                    ------------------------------------------                        -->

<!--                        Public Derivation      	Private Derivation    	Protected Derivation
Private members           	Not Inherited            Not Inherited              	Not Inherited              
Protected members           Protected                Private                     	Protected          
Public members           	Public	                 Private                        Protected    
As shown in the table,

If the class is inherited in public mode then its private members cannot be inherited in child class.
If the class is inherited in public mode then its protected members are protected and can be accessed in child class.
If the class is inherited in public mode then its public members are public and can be accessed inside child class and outside the class.
If the class is inherited in private mode then its private members cannot be inherited in child class.
If the class is inherited in private mode then its protected members are private and cannot be accessed in child class.
If the class is inherited in private mode then its public members are private and cannot be accessed in child class.
If the class is inherited in protected mode then its private members cannot be inherited in child class.
If the class is inherited in protected mode then its protected members are protected and can be accessed in child class.
If the class is inherited in protected mode then its public members are protected and can be accessed in child class. -->