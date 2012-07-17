//
//  AppDelegate.h
//  AccountSafe
//
//  Created by li ming on 6/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CheckViewController;
@class AccountInfo;

#define kInAppPurchaseProductName @"com.idreems.AccountSafe"

#define MANAGED_CONTEXT [((AppDelegate*)[[UIApplication sharedApplication]delegate]) managedObjectContext]
#define APPDELEGATE    [[UIApplication sharedApplication]delegate]

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UINavigationController* naviController;
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;	
}
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic, readonly) NSString *applicationDocumentsDirectory;
@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) CheckViewController *viewController;
@property (strong, nonatomic) UINavigationController *naviController;

+(void)scheduleLocalNotification:(AccountInfo*)info;
+(void)cancelLocalNotification:(AccountInfo*)info;
+(void)cancelAllLocalNotifications;


+(BOOL)isPurchased;
@end
