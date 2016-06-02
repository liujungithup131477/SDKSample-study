//
//  AppDelegate.h
//  ApiClient
//
//  Created by Tencent on 12-2-27.
//  Copyright (c) 2012年 Tencent. All rights reserved.
//

/**
 *  SDK文件包括 libWeChatSDK.a，WXApi.h，WXApiObject.h 三个。
 */
#import <UIKit/UIKit.h>
#import "WXApi.h"
#import "SendMsgToWeChatViewController.h"
#import "RespForWeChatViewController.h"

@interface AppDelegate : UIResponder<UIApplicationDelegate, sendMsgToWeChatViewDelegate,
UIAlertViewDelegate, WXApiDelegate, RespForWeChatViewDelegate>
{
    enum WXScene _scene;
}

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) SendMsgToWeChatViewController *viewController;

@end