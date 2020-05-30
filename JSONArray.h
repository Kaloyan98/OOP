#include <cstring>
 
template <class T>
class JSONArray{
private:
   JSONObject<T>* array;
   int size;
   int capacity;
 
   void resize();
public:
   JSONArray();
   JSONArray(const JSONArray& from);
 
   JSONArray& operator= (const JSONArray& from);
 
   ~JSONArray();
 
   JSONObject<T> operator[] (const int& pos) const;
   void insert(const char* key, T value);
 
   T get_value(const char* key) const;
 
   int get_size() const;
};
