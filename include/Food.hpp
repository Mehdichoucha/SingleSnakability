#include <string>
#include <vector>

namespace snake {

struct Vec2 {
    int x{0};
    int y{0};

    friend bool operator==(const Vec2& a, const Vec2& b) {
        return a.x == b.x && a.y == b.y;
    }
};

class IFoodEffectTarget {
public:
    virtual ~IFoodEffectTarget() = default;

    virtual void addScore(int delta) = 0;
    virtual void growSnake(int segments) = 0;
    virtual void shrinkSnake(int segments) = 0; // optionnel selon ton design
    virtual void setGameOver(const std::string& reason) = 0;
};

class Food {
    public:
        Food(std::string name, char foodType, int baseScore);

        virtual ~Food() = default;

        const std::string& name() const noexcept;

        int baseScore() const noexcept;

        const Vec2& position() const noexcept;
        void setPosition(const Vec2& p) noexcept;

        virtual void onEaten(IFoodEffectTarget& target) const = 0;


    private:
        std::string m_name;
        char m_glyph;
        int m_baseScore;
        double m_weight;
        Vec2 m_pos;
};

class AppleFood final : public Food {
public:
    AppleFood();
    void onEaten(IFoodEffectTarget& target) const override;
};

class BonusFood final : public Food {
public:
    BonusFood();
    void onEaten(IFoodEffectTarget& target) const override;
};

class PoisonFood final : public Food {
public:
    PoisonFood();
    void onEaten(IFoodEffectTarget& target) const override;
};

}