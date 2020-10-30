#ifndef VECTOR_H
#define VECTOR_H
#include <bits/stdc++.h>
using namespace std;
template <typename Array> class Vector
{
public:
//四大构造函数---------------------------------------------
    Vector(int size=0,const Array num=0);//构造函数
    Vector(const Vector<Array> &A);//拷贝构造
    virtual ~Vector();//析构函数
    Vector<Array> & operator=(const Vector &V);//赋值构造

//属性(修改)函数----------------------------------------
    Vector<Array> & SetVector(); //值修改
    void ShowVector() const; //向量展示
    void ShowD() const; //展示维度
    int GetD() const; //获得维度
    Array Mod() const; //取模长
    Vector<Array> & Normalize();//单位化
    bool Empty() const;//确认向量是否为空
//操作函数-----------------------------------------------
    Array operator[](const int pos);//取值
    Vector<Array> & Resize(const int Num);//尺寸修改
    Vector<Array> & Append(const Array a_num=0);//在末尾添加一个数字
    Vector<Array> & Pop();//删掉末尾的一个数字
    int Find(const Array f_num) const;//查找并返回数字在向量中的位置，如果没有则输出为-1

//运算函数-----------------------------------------------
    /*Vector<Array> & Plus(const Vector<Array> &vec); //两个向量相加(当长度不同时无法相加)
    Vector<Array> & Plus(int pos,Array a_num); //向量中第pos个数据加a_num(从0开始)
    Vector<Array> & ImPlus(const Vector<Array> &vec);   //两个向量强制相加(当长度不同时可以相加)
    Vector<Array> & operator+(const Vector<Array> &vec); //两个向量相加，效果和Plus相同
    Vector<Array> & Minus(const Vector<Array> &vec);//两个向量相减，
    Vector<Array> & operator-(const Vector<Array> &vec); //两个向量相减，效果和Minus相同
    double operator*(const Vector<Array> &vec); //两个向量相乘
    double Multiply(const Vector<Array> &vec); //两个向量相乘*/
//成员数据--------------------------------------------------
private:
    Array *a;
    int num;
};
template <typename Array>
ostream&  operator<<(ostream&  out,Vector<Array>& t)     // 输出流重载声明及实现
{
    if(t.GetD()==0)
        out<<"Nothing to output";
    else
    {
        out<<"[ ";
        for(int i=0; i<t.GetD(); i++)
            out<<t[i]<<(i==t.GetD()-1?" ]":" , ");  //利用三元操作符按格式输出
    }
    return out;
}

template <typename Array>
Vector<Array>::Vector(int size,const Array num_):num(size)    //构造函数，创建一个初始值为num_，维度为size的数组，使用了冒号表达式来初始化
{
    num=(num>0)?num:0;  // 小于等于0的均会变成0
    a=new Array[num];
    for(int i=0; i<num; i++)
        a[i]=num_;  //逐个赋值
}

template <typename Array>
Vector<Array>::Vector(const Vector<Array> &A) //深拷贝构造
{
    num=A.num;
    delete [] a;
    if(num>0)
    {
        a=new Array[num];
        for(int i=0; i<num; i++)
            a[i]=A.a[i];
    }
}
template <typename Array>
Vector<Array>::~Vector()    //析构函数
{
    if(a!=NULL)
        delete [] a;
}
template <typename Array>
Vector<Array>& Vector<Array> :: operator=(const Vector &V)  //赋值构造函数
{
    if(num!=V.num)
    {
        if(a!=NULL)
            delete [] a;
        a=new Array[num=V.num];
    }
    for(int i=0; i<num; i++)
        a[i]=V.a[i];
    return *this;
}
template <typename Array>
Vector<Array>& Vector<Array> :: SetVector()     //为向量重新赋值
{
    if(num!=0&&a!=NULL)
        for(int i=0; i<num; cin>>a[i],i++);
    return *this;
}
template <typename Array>
void Vector<Array> ::ShowVector() const     //常量函数，防止对内容的修改
{
    if(num!=0&&num!=1)
        for(int i=0; i<num; i++)
        {
            if(i==0)
                cout<<"[ "<<a[i]<<" , ";
            else if(i==num-1)
                cout<<a[i]<<" ]"<<endl;
            else
                cout<<a[i]<<" , ";
        }
    else if (num==1)
        cout<<"[ "<<a[0]<<" ]"<<endl;
    else cout<<"The Dimension of this Vector is 0."<<endl;
    return ;
}
template <typename Array>
void Vector<Array> ::ShowD() const
{
    cout<<"The Dimension of this Vector is: "<<num<<endl;
}
template <typename Array>
int Vector<Array> ::GetD() const
{
    return num;
}
template <typename Array>
Vector<Array> & Vector<Array> ::Resize(const int Num)
{
    {
        if(Num==0&&num!=0)  //要修改到空维度，直接删除空间
        {
            delete [] a;
            a=NULL;
            num=Num;
            return *this;
        }
        else if(Num>num)
        {
            Array * num_=new Array[num];    //创建一个临时储存空间
            for(int i=0; i<num; num_[i]=a[i],i++);  //利用该临时空间保存数据
            delete [] a;
            a=new Array[Num];   //重新创建
            for(int i=0; i<Num; i++)
                a[i]=(i<num?num_[i]:0);//默认为0填充
            num=Num;
            delete [] num_;
            return *this;
        }
        else if(Num<num)
        {
            Array* num_=new Array[Num];
            for(int i=0; i<Num; i++)
                num_[i]=a[i];
            delete [] a;
            a=new Array[Num];   //等价于删除了多余的部分
            for(int i=0; i<Num; i++)
                a[i]=num_[i];
            delete [] num_;
            num=Num;
            return *this;
        }
        else if(num==Num)
            cout<<"Nothing to operate."<<endl;
        return *this;//考虑到了当Num<0的情况，不满足上述条件的时候直接返回。
    }
}
template <typename Array>
Array Vector<Array> ::operator[](int pos)
{
    if(pos<num&&pos>=0)
        return a[pos];
    else
        throw(int)-1;
}
template <typename Array>
Array Vector<Array>::Mod() const
{

    Array sum=0;
    if(num==0)throw(int) -1;
    for(int i=0; i<num; i++)
        sum+=a[i]*a[i];
    return sqrt((Array)sum);
}
template <typename Array>
Vector<Array> & Vector<Array>::Normalize()
{
    Array mods=this->Mod(); //调用Mod函数
    if(num==0) throw(int)-1; //当维度为0时抛掷异常
    for(int i=0; i<this->num; i++)
        this->a[i]=this->a[i]/mods;
    return *this;
}
template <typename Array>
bool Vector<Array>::Empty() const   //检测向量是否为空
{
    if (num==0)
        return true;
    else
        return false;
}

template <typename Array>
Vector<Array> & Vector<Array> ::Append(const Array a_num)//在末尾添加一个数字
{
    if(this->Empty())
    {
        delete [] a;
        a=new Array [1];
        a[0]=a_num;
        num++;
        return *this;
    }
    Array *num_ =new Array[num+1];
    for(int i=0; i<num+1; i++)
        num_[i]=(i<num?a[i]:a_num);
    delete [] a;
    num++;
    a=new Array [num];
    for(int i=0; i<num; i++)
        a[i]=num_[i];
    delete [] num_;
    return *this;
}

template <typename Array>
Vector<Array>  & Vector<Array> ::Pop()//删掉末尾的一个数字
{
    if(num==0)
    {
        cout<<"Can't be Pop anymore!"<<endl;
        return *this;
    }
    Array *num_ =new Array[num-1];
    for(int i=0; i<num-1; i++)
        num_[i]=a[i];
    delete [] a;
    num-=1;
    a=new Array [num];
    for(int i=0; i<num; i++)
        a[i]=num_[i];
    delete [] num_;
    return *this;
}
template <typename Array>
int Vector<Array> ::Find(const Array f_num) const//查找并返回数字在向量中的位置，如果没有则输出为-1
{
    for(int i=0; i<num; i++)
        if(a[i]==f_num)
            return i;
    return -1;
}

#endif // VECTOR_H
