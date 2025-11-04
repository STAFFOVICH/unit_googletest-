template <typename T>
class Heap {
public:
    void push(const T& value);
    T pop(); // выбрасывает исключение, если куча пуста
    bool empty() const;
};
