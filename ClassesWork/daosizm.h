#ifndef DAOSIZM
#define DAOSIZM

class Daosizm {
public:

    void barter()
    {
        int take=0;
        MyClass myClassA(3);
        MyClass myClassB(5);
        std::cout << "C1, z= "<<myClassA.getZ() << std::endl;
        std::cout << "V2, z= "<<myClassB.getZ() << std::endl;
        take=myClassA.getZ();
        myClassA.setZ(myClassB.getZ());
        myClassB.setZ(take);
        std::cout << "---" << std::endl;
        std::cout << "C1, z= "<<myClassA.getZ() << std::endl;
        std::cout << "V2, z= "<<myClassB.getZ() << std::endl;

    }

    void setZ(int peremen)
    {
        m_z = peremen;
    }

    int getZ() const
    {
        return m_z;
    }

private:
    int m_z;

};


#endif // DAOSIZM

