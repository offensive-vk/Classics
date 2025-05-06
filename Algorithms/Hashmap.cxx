#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <functional> // For std::hash

template <typename K, typename V>
class HashMap {
private:
    static const int DEFAULT_CAPACITY = 10;
    std::vector<std::list<std::pair<K, V>>> buckets;
    size_t size;

    size_t hash(const K& key) const {
        std::hash<K> hasher;
        return hasher(key) % buckets.size();
    }

public:
    HashMap(int capacity = DEFAULT_CAPACITY) : buckets(capacity), size(0) {}

    void insert(const K& key, const V& value) {
        size_t index = hash(key);
        for (auto& pair : buckets[index]) {
            if (pair.first == key) {
                pair.second = value; // Update if key exists
                return;
            }
        }
        buckets[index].push_back({key, value});
        size++;
    }

    bool contains(const K& key) const {
        size_t index = hash(key);
        for (const auto& pair : buckets[index]) {
            if (pair.first == key) {
                return true;
            }
        }
        return false;
    }

    V get(const K& key) const {
        size_t index = hash(key);
        for (const auto& pair : buckets[index]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        // Handle the case where the key is not found (you might want to throw an exception)
        throw std::out_of_range("Key not found in HashMap");
    }

    void remove(const K& key) {
        size_t index = hash(key);
        buckets[index].remove_if([&](const std::pair<K, V>& pair) {
            return pair.first == key;
        });
        size--;
    }

    size_t getSize() const {
        return size;
    }

    bool isEmpty() const {
        return size == 0;
    }

    void clear() {
        for (auto& bucket : buckets) {
            bucket.clear();
        }
        size = 0;
    }
};

int main() {
    HashMap<std::string, int> ageMap;
    ageMap.insert("Alice", 30);
    ageMap.insert("Bob", 25);
    ageMap.insert("Charlie", 35);

    std::cout << "Size of map: " << ageMap.getSize() << std::endl;
    std::cout << "Is Alice in the map? " << (ageMap.contains("Alice") ? "Yes" : "No") << std::endl;
    std::cout << "Age of Bob: " << ageMap.get("Bob") << std::endl;

    ageMap.insert("Alice", 31); // Update Alice's age
    std::cout << "Updated age of Alice: " << ageMap.get("Alice") << std::endl;

    ageMap.remove("Bob");
    std::cout << "Size of map after removing Bob: " << ageMap.getSize() << std::endl;
    std::cout << "Is Bob in the map? " << (ageMap.contains("Bob") ? "Yes" : "No") << std::endl;

    ageMap.clear();
    std::cout << "Is the map empty after clearing? " << (ageMap.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
