#pragma once
#include "screen.hpp"
#include "../components/label.hpp"
#include "../components/button.hpp"
#include "../components/ui_manager.hpp"
#include "../components/userrole.hpp"


class LoginScreen : public Screen {
private:
    Label heading;
    Label label;
    Button patient_btn;
    Button doctor_btn;
    Button admin_btn;
    Button exit_btn;
public:
    LoginScreen();
    void handle_event(sf::RenderWindow& window, const sf::Event& event) override;
    void update() override;
    void render(sf::RenderWindow& window) override;
};
