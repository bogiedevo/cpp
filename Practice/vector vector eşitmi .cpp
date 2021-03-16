template<typename T>
bool isEqual(std::vector<T> const &v1, std::vector<T> const &v2)
{
    return (v1.size() == v2.size() &&
            std::equal(v1.begin(), v1.end(), v2.begin()));
}
 
int main()
{
    std::vector<int> v1 = { 1, 2, 5, 3, 4, 5 };
    std::vector<int> v2 = { 1, 2, 3, 5, 4, 5 };
 
    if (isEqual(v1, v2)) {
        std::cout << "Both vectors are equal";
    } else {
        std::cout << "Both vectors are not equal";
    }
 
    return 0;
}
////////////////////////////////////////////// string
bool binary_pred(string s1, string s2) {
   return true;
}

int main(void) {
   vector<string> v1 = {"one", "two", "three"};
   vector<string> v2 = {"ONE", "THREE", "THREE"};
   bool result;

   result = equal(v1.begin(), v1.end(), v2.begin(), binary_pred);

   if (result == true)
      cout << "Vector range is equal." << endl;

   return 0;
}