
namespace fillout {
    void Fill(int(&)[5]);
    void CheckBalance(int (&)[5]);

}

namespace operation {
    void Shift(int (&)[5],int);
    void Swap();
    template <typename FirstType, typename... Types>
        void Swap(FirstType first_arg, Types... args) {
            std::cout << (int)!first_arg << " ";
            Swap(args...);   
        };
    
}