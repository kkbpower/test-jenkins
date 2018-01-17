//
//  AppDelegate.h
//  TestJenkinks
//
//  Created by kkb on 2018. 1. 17..
//  Copyright © 2018년 kkb. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

