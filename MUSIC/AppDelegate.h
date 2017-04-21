//
//  AppDelegate.h
//  MUSIC
//
//  Created by jiuzhi on 2017/4/21.
//  Copyright © 2017年 jiuzhi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

