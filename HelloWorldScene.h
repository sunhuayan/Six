#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
using namespace cocos2d;

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    void menuCloseCallback(cocos2d::Ref* pSender);
    CREATE_FUNC(HelloWorld);
    
public:
    //这四个函数是単点触摸
    virtual bool onTouchBegan(Touch *touch, Event *unused_event);//手指进入屏幕的时候
    virtual void onTouchMoved(Touch *touch, Event *unused_event);//手指在屏幕移动 多次
    virtual void onTouchEnded(Touch *touch, Event *unused_event);//手指离开屏幕
    virtual void onTouchCancelled(Touch *touch, Event *unused_event);//出问题的时候,很难被触发
public:
    Sprite* _sprite;
    void onExit();
};

#endif // __HELLOWORLD_SCENE_H__
