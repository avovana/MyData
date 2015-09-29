#ifndef WORKER_H
#define WORKER_H
class Abstract;

class Worker
{
public:
    Worker();

private:
    Abstract *m_cutter = nullptr;

};

#endif // WORKER_H
