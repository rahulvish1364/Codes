
class Complete // Multiple, virtual, Multilevel
{
	// Data members, static, mutable, const
	// Contained Objects
public:
	// Methods, static, const, virtual

	Complete() // : Initializer list consti(10), i(25)
	/*
	1. Call Base Constructors in order of Inheritance.
	2. Call Contained object constructors in order of declaration.
	3. Initilize vptr to respective offset table.
	4. Initilize vptr to respective vtable.
	5. Initialize mutable data members in the order of declaration.
	6. Initialize const data members in the order of declaration.
	*/
	{
	// 7. Call constructors of local objects in order of declaration.
	}
	// 8. Call destructors of local objects in reverse order of declaration.

	~Complete()
	/*
	1. Initilize vptr to respective offset table.
	2. Initilize vptr to respective vtable.
	*/
	{
	// 3. Call constructors of local objects in order of declaration.
	}
	/*
	4. Call destructors of local objects in reverse order of declaration.
	5. Call destructors of Contained objects in reverse order of declaration.
	6. Call destructors of base in reverse order of Inheritance.
	*/

};

