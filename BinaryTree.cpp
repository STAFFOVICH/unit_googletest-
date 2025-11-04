template <typename T>
class BinaryTree {
public:
    void push(const T& value);
    T pop(const T& value); // удаляет узел со значением value и возвращает его; выбрасывает исключение, если не найден
    bool search(const T& value) const;
    bool empty() const;
};
