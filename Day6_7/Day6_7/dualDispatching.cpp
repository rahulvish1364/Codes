#include <iostream>
using namespace std;

struct gameObject {
	virtual void collidesWith(gameObject &rhs) = 0;
	virtual void Collided() = 0;
};

struct Ship : gameObject{
	void collidesWith(gameObject &rhs)  {
		cout<<" Ship object collides with ";
		rhs.Collided();
	}
	void Collided() { cout<<" Ship "<<endl; }
};
struct Asteroid : gameObject{
	void collidesWith(gameObject &rhs)  {
		cout<<" Asteroid object collides with ";
		rhs.Collided();
	}
	void Collided() { cout<<" Asteroid "<<endl; }
};
struct Satellite : gameObject{
	void collidesWith(gameObject &rhs)  {
		cout<<" Satellite object collides with ";
		rhs.Collided();
	}
	void Collided() { cout<<" Satellite "<<endl; }
};

void Collide (gameObject &lhs, gameObject &rhs){

	if( typeid(lhs) != typeid(rhs))
		lhs.collidesWith(rhs);
	else
//		cout<<"Same type objects cannot collide with each other"<<endl;
		cout<< typeid(lhs).name() << " object cannot collide with "<< typeid(rhs).name() <<" Object" <<endl;
}

// --------------- Application -------------
void main(){
	Ship sObj;
	Asteroid aObj;
	Satellite saObj;

	Collide(sObj, aObj);
	Collide(sObj, saObj);
	Collide(saObj, aObj);

	Collide(sObj, sObj);
}


