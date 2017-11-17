
#ifndef H_6_8_IntArray
#define H_6_8_IntArray

class Hoge {
 private:
  int m_size;
  int * m_array;
 public:
  Hoge(int size = 1);
  Hoge(const Hoge &hoge);
  ~Hoge();
  int Size();
};

#endif
