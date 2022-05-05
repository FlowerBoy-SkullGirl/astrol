#include <iostream>
#include <string>

#ifndef PERSON_H
#define PERSON_H

class Person{
	
	protected:
		String first_name;
		String last_name;
		String address;
		String phone;
	
	public:
		//Constructor
		Person(String fname, String lname, String addr, String phoneNum);

		//Accessors
		String get_first_name();
		String get_last_name();
		String get_address();
		String get_phone();
		
		//Mutators
		void set_first_name(String name);
		void set_last_name(String name);
		void set_address(String addr);
		void set_phone(String phoneNum);
		
}

#endif
