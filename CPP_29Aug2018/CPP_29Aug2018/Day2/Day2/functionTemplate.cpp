
template <typename T>
inline T GETMAX(T x, T y) {
	return ( x > y ? x : y ) ;
}
/*
inline int GETMAX(int x, int y) {
	return ( x > y ? x : y ) ;
}
inline double GETMAX(double x, double y) {
	return ( x > y ? x : y ) ;
}
*/

template <typename T, typename T2>
inline T GETMAX(T x, T2 y) {
	return ( x > y ? x : y ) ;
}
/*
inline int GETMAX(int x, int y) {
	return ( x > y ? x : y ) ;
}
*/
void main(){
//	GETMAX(10, 20);
//	GETMAX(12.12, 56.45);
	GETMAX<int, int>( 10, 12.1);
	GETMAX<int>(1,2);
}


