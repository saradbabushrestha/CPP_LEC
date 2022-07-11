// sytax for decalring derived class from a base class which is a tempelate is ;
template <class T1,....>
class base_class
{
    // tempelate type data and function
};
template <class T1,..>
class derived_class
{
    // tempelate type data and function
};


// concept of providing the tempelate argument to the base class during inheritance
template <class T>
class base
{
    private:
    T data;
    public:
    base (){}
    base(T a)
    {
        data=a;
    }
    void display()
    {
        cout<<"data : "<<data<<endl;
    }
};
// if we dont add extra ttempelate parameter and supply the tempelate argument of base toderived then we create non tempelate derived class
class derived1: public base <int>
{
    public:
    deirved1()
    {

    }
    derived1(int a):base<int>(a){}
};
// object created as derived1 obj(5) it will dislay 5 when obj.display();


// if we add extra parameter in derived class and suplly the tempelate argument of the base class with the data type we create a derived class tempelate
template<class T>
class derived2: public base<int>
{
    private:
    T data;
    public:
    derived2(int a, T b):base<int>(a),data(b){}
    void display()
    {
        cout<<"in base";
        base<int>::display();
        cout<<"in derived data:"<<data<<endl;
    }
};
// object 
// derived2<float> obj2(10,10.23);
// obj2.display();
// output is base data:10 and derived:10.23


// if base class tempelate is still useful in derived class the derive class is tempelate class
template<class T>
class derived3:public base<T>
{
    public:
    derived3(){}
    derived3(T a):base<t>(a){}
};
// object as
// derived3<int>obj3(15);
// output is 15


// we can also add extra tempelate
template<class T1, class T2>
class derived4:public base<T1>
{
    private;
    T2 data;
    public:
    derived4(){}
    derived4(T1 a, T2 b):base<T1>(a),data(b){}
    void display()
    {
        cout<<"in base:";
        base<T1>::display();
        cout<<"in derived class:"<<data<<endl;
    }
};
// derived4<int, float> obj4(4,3.5);
// output 
// in base;4 and in derived :3.5


// a derived class can be made from base which is not a tempelate classs.tempelate parameter is added in derived class during inheritance
class base2
{
    private:
    int data;
    public:
    base2(){}
    base2(int d)
    {
        data=d;
    }
    void display()
    {
        cout<<"data: "<<d<<endl;
    }

};
template<class T>
class derived5: public base 2
{
    private:
    T data;
    public:
    derived5()
    {

    }
    derived5(int a, T b):base2(a),data(b){}
    void display()
    {
        cout<<"in base:";
        base::display();
        cout<<"in derived data:"<<data<<endl;
    }
};


// derived5<flooat>obj5(25,9.7);
// in base 25 in derived 9.7
