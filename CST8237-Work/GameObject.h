#pragma once 

class GameObject
{
public:
  virtual void Initialize() = 0;
  
  virtual void Update(float dt) = 0;
  virtual void Draw(float dt) = 0;

  ~GameObject();

protected:
  GameObject();
};