
extern "C++"
{
void fun() // In C: _fun
// In VC++: fun @@YA X X Z 
// In g++: funv
{}


void fun(int arg) // In C: _fun
// In VC++: fun @@YA X H @Z 
// In g++: funi
{}
}
void main(){
	fun();
	fun(10);
}