/*************************************************************************
	> File Name: HasPtr.h
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月21日 星期四 16时12分00秒
 ************************************************************************/

#ifndef _HASPTR_H
#define _HASPTR_H

#include <iostream>
#include <string>

class HasPtr 
{
public:
    /*默认构造函数 计数器存在动态内存中 值为 1 */
    HasPtr( const std::string &s=std::string() ) : ps( new std::string(s) ), i(0),use(new std::size_t(1)){}
    
    /*拷贝构造函数 引用计数曾1 只是拷贝指针 共享底层数据对象*/
    HasPtr(const HasPtr &h) : ps(h.ps), i(h.i),use(h.use) { ++*use; }

    HasPtr& operator=(const HasPtr &h);

    ~HasPtr();

    std::string& deref()const 
    {
        :
    }
    

private:
    std::string *ps;
    int i;
    std::size_t *use;      /*指针 指向存放在动态内存中的引用计数器*/
};



/*析构函数 若引用计数为 1 (仅有1个指针指向底层数据)  释放对象*/
inline HasPtr :: ~HasPtr()
{
    if(--*use == 0)
    {
        delete ps;
        delete use;
    }
}

inline HasPtr& HasPtr :: operator=(const HasPtr & h)
{
    ++(*h.use);
    if(--*use ==0)
    {
        delete ps;
        delete use;
    }
    ps = h.ps;
    use = h.use;
    i= h.i;
    return *this;
}



#endif
