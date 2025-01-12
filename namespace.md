# namespace explaination

namespace is way to group and organize related code(like variables, functions, classes, etc.) under a unique name to avoid naming conflicts.

## syntax
```cpp
namespace NamespaceName{
    int x = 10;

    void display() {
        std::cout<<"inside namespace"<< std::endl;
    }
}
```
## accessing Namespace Members

### using the scope resolution operater '::'
```c++
std::cout<<NamespaceName::x<<std::endl;
Namespace::display();
```
### using the using Keyword
```cpp
using NamespaceName::display;
display();
```

or bring all members of the namespace
```cpp
using namespace NamespaceName;
std::cout << x <<std::endl;
display();
```
