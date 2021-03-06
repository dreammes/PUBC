//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CATransition, HsAttachmentPreviewController, HsConversationViewController, HsFAQListViewController, HsNewConversationTableViewController, HsSectionsListViewController, HsSingleFaqViewController, HsSuggestionsViewController, NSString, UINavigationController, UIViewController;

@protocol HsUINavigator <NSObject>
- (void)handleViewDidDisappearForViewController:(UIViewController *)arg1;
- (void)handleViewWillAppearForViewController:(UIViewController *)arg1;
- (void)replaceTopViewControllerWithUIViewController:(UIViewController *)arg1 in:(UINavigationController *)arg2 customTransition:(CATransition *)arg3;
- (UIViewController *)loadingViewController;
- (_Bool)isConversationViewControllerVisible;
- (void)popUptoNewConversationViewControllerFromViewController:(UIViewController *)arg1;
- (UIViewController *)appsHostViewController;
- (void)replaceTopViewControllerWithUIViewController:(UIViewController *)arg1 customTransition:(CATransition *)arg2;
- (void)replaceTopViewControllerWithNewConversationController;
- (HsSingleFaqViewController *)singleFAQViewControllerForFAQPublishId:(NSString *)arg1 language:(NSString *)arg2 isAdminSuggested:(_Bool)arg3 onFAQReadBlock:(void (^)(NSString *))arg4;
- (HsSingleFaqViewController *)singleFAQViewControllerForFAQPublishId:(NSString *)arg1;
- (HsFAQListViewController *)faqListViewControllerForSectionPublishId:(NSString *)arg1;
- (void)dismissHelpshiftViewControllersWithCompletion:(void (^)(void))arg1;
- (_Bool)showAddCloseButtonForViewController:(UIViewController *)arg1;
- (HsSuggestionsViewController *)suggestionsViewController;
- (HsSectionsListViewController *)sectionsListViewController;
- (HsAttachmentPreviewController *)attachmentPreviewController;
- (HsNewConversationTableViewController *)newConversationViewController;
- (HsConversationViewController *)conversationViewController;
- (UIViewController *)conversationFlowViewController;
- (void)startConversationFlow;
- (void)pushViewController:(UIViewController *)arg1;
- (void)launchSDKWithViewController:(UIViewController *)arg1 onHostViewController:(UIViewController *)arg2;
@end

