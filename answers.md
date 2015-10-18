## Answers

### Q1 -> Q10
1. A class is a C++ vehicle for translating an abstraction to a user-defined type. It combines data representation and methods for manipulating that data into one neat package. 
2. A class design attempts to separate the public interface from the specifics of the implementation. The public interface represents the abstraction component of the design. Gathering the implementation details together and separating them from the abstraction is called encapsulation. Data hiding (putting data into the private section of a class) is an instance of encapsulation, and so is hiding functional details of an implementation in the private section.
3. A class defines the properties and behavior for the objects represented by the abstraction. A class thus denotes a category of objects and act as a blueprint for creating such objects. An object exhibits the property and behaviors defined by its class. Generally, an object is an instance of a class.
4. 
5. See **"BankAccountProgram/BankAccount.h"** file
6. class constructors are called when an instance is created, class destructors are called when an object is deleted
7. ```c++
	BankAccount::BankAccount()
	{
		m_name     		= "no name";
		m_accountNumber = "invalid";
		m_balance		= 0;
	}

8. A default constructor is a constructor that is used to create an object when you don’t provide explicit initialization values. The advantage of default constructor is to make the object member variables have reasonable values
9. see **"stock20_modified.h"**
10. **this** is a pointer to the object in the memory, ***this** is an alias to the object itself (pointer dereferencing)

### Programming exercises 1, 2, and 6
1. See **"BankAccountProgram/BankAccount.cpp"** file
