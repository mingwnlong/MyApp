//
//  UIResponder+Routor.h
//  MyApp
//
//  Created by ming on 2018/8/13.
//  Copyright © 2018年 ming. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIResponder (Routor)
- (void)routerEventWithName:(NSString *)eventName userInfo:(NSDictionary *)userInfo;


@end
