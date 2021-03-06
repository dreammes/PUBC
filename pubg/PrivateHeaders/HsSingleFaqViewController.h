//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HSBaseViewController.h"

#import "HsAdapterObserver.h"
#import "WKNavigationDelegate.h"

@class HsBorderedButton, HsFAQsDM, HsLabel, HsNewConversationTableViewController, HsSingleFaqAdapter, NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIView, WKWebView;

@interface HsSingleFaqViewController : HSBaseViewController <HsAdapterObserver, WKNavigationDelegate>
{
    _Bool _videoExitedFullScreen;	// 8 = 0x8
    _Bool _isAdminSuggested;	// 9 = 0x9
    _Bool _isComingFromSuggestionScreen;	// 10 = 0xa
    _Bool _isParentDecomposed;	// 11 = 0xb
    NSString *_faqPublishId;	// 16 = 0x10
    CDUnknownBlockType _faqReadBlock;	// 24 = 0x18
    NSString *_language;	// 32 = 0x20
    NSArray *_searchMatches;	// 40 = 0x28
    NSArray *_customContactUsFlows;	// 48 = 0x30
    NSString *_convPrefillText;	// 56 = 0x38
    HsFAQsDM *_faqsDM;	// 64 = 0x40
    HsNewConversationTableViewController *_hsNewConversationVc;	// 72 = 0x48
    NSLayoutConstraint *_statusViewBottomConstraint;	// 80 = 0x50
    NSLayoutConstraint *_statusLabelRightOffset;	// 88 = 0x58
    NSLayoutConstraint *_webViewContainerBottomConstraint;	// 96 = 0x60
    NSLayoutConstraint *_statusViewLabelLeadingConstraint;	// 104 = 0x68
    NSLayoutConstraint *_statusViewLabelTrailingConstraint;	// 112 = 0x70
    NSLayoutConstraint *_noButtonTrailingConstraint;	// 120 = 0x78
    NSLayoutConstraint *_contactUsButtonTrailingConstraint;	// 128 = 0x80
    UIView *_statusView;	// 136 = 0x88
    HsLabel *_statusLabel;	// 144 = 0x90
    HsBorderedButton *_yesButton;	// 152 = 0x98
    HsBorderedButton *_noButton;	// 160 = 0xa0
    HsBorderedButton *_contactUsButton;	// 168 = 0xa8
    UIActivityIndicatorView *_activityIndicator;	// 176 = 0xb0
    WKWebView *_webView;	// 184 = 0xb8
    UIView *_webContainerView;	// 192 = 0xc0
    id <HsSingleFaqUIController> _controller;	// 200 = 0xc8
    HsSingleFaqAdapter *_adapter;	// 208 = 0xd0
    id <HsFaqViewBaseController> _sectionsViewBaseController;	// 216 = 0xd8
}

@property(retain, nonatomic) id <HsFaqViewBaseController> sectionsViewBaseController; // @synthesize sectionsViewBaseController=_sectionsViewBaseController;
@property(retain, nonatomic) HsSingleFaqAdapter *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) id <HsSingleFaqUIController> controller; // @synthesize controller=_controller;
@property(nonatomic) __weak UIView *webContainerView; // @synthesize webContainerView=_webContainerView;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) __weak HsBorderedButton *contactUsButton; // @synthesize contactUsButton=_contactUsButton;
@property(nonatomic) __weak HsBorderedButton *noButton; // @synthesize noButton=_noButton;
@property(nonatomic) __weak HsBorderedButton *yesButton; // @synthesize yesButton=_yesButton;
@property(nonatomic) __weak HsLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak UIView *statusView; // @synthesize statusView=_statusView;
@property(nonatomic) __weak NSLayoutConstraint *contactUsButtonTrailingConstraint; // @synthesize contactUsButtonTrailingConstraint=_contactUsButtonTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *noButtonTrailingConstraint; // @synthesize noButtonTrailingConstraint=_noButtonTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *statusViewLabelTrailingConstraint; // @synthesize statusViewLabelTrailingConstraint=_statusViewLabelTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *statusViewLabelLeadingConstraint; // @synthesize statusViewLabelLeadingConstraint=_statusViewLabelLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *webViewContainerBottomConstraint; // @synthesize webViewContainerBottomConstraint=_webViewContainerBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *statusLabelRightOffset; // @synthesize statusLabelRightOffset=_statusLabelRightOffset;
@property(nonatomic) __weak NSLayoutConstraint *statusViewBottomConstraint; // @synthesize statusViewBottomConstraint=_statusViewBottomConstraint;
@property(nonatomic) _Bool isParentDecomposed; // @synthesize isParentDecomposed=_isParentDecomposed;
@property(nonatomic) _Bool isComingFromSuggestionScreen; // @synthesize isComingFromSuggestionScreen=_isComingFromSuggestionScreen;
@property(nonatomic) __weak HsNewConversationTableViewController *hsNewConversationVc; // @synthesize hsNewConversationVc=_hsNewConversationVc;
@property(retain, nonatomic) HsFAQsDM *faqsDM; // @synthesize faqsDM=_faqsDM;
@property(copy, nonatomic) NSString *convPrefillText; // @synthesize convPrefillText=_convPrefillText;
@property(copy, nonatomic) NSArray *customContactUsFlows; // @synthesize customContactUsFlows=_customContactUsFlows;
@property(copy, nonatomic) NSArray *searchMatches; // @synthesize searchMatches=_searchMatches;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) CDUnknownBlockType faqReadBlock; // @synthesize faqReadBlock=_faqReadBlock;
@property(nonatomic) _Bool isAdminSuggested; // @synthesize isAdminSuggested=_isAdminSuggested;
@property(copy, nonatomic) NSString *faqPublishId; // @synthesize faqPublishId=_faqPublishId;
- (void).cxx_destruct;	// IMP=0x000000010140e48c
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x000000010140df50
- (void)videoExitedFullScreen:(id)arg1;	// IMP=0x000000010140df3c
- (void)videoFullScreen:(id)arg1;	// IMP=0x000000010140df2c
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010140dd5c
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x000000010140db20
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x000000010140da54
- (void)showError;	// IMP=0x000000010140d82c
- (void)adapterDataSourceUpdationFailed;	// IMP=0x000000010140d770
- (void)noChangeInadapterDataSource;	// IMP=0x000000010140d76c
- (void)adapterDataSourceUpdated;	// IMP=0x000000010140d4f4
- (void)sendAnyway;	// IMP=0x000000010140d414
- (void)launchNewConversation:(id)arg1;	// IMP=0x000000010140d3d4
- (void)isHelpfulNoAction:(id)arg1;	// IMP=0x000000010140d2f0
- (void)isHelpfulYesAction:(id)arg1;	// IMP=0x000000010140d0d8
- (void)suggestedFAQDone;	// IMP=0x000000010140d064
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000010140d010
- (void)dealloc;	// IMP=0x000000010140cfb8
- (void)didReceiveMemoryWarning;	// IMP=0x000000010140cf60
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010140ce54
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010140cd08
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010140cbf4
- (void)viewDidLoad;	// IMP=0x000000010140c910
- (void)clearWebView;	// IMP=0x000000010140c82c
- (void)reloadContent;	// IMP=0x000000010140c79c
- (void)loadFaqContent;	// IMP=0x000000010140c698
- (void)updateTrailingConstraintOfStatusLabel:(id)arg1;	// IMP=0x000000010140c4c4
- (void)updateBottomConstraintsOfWebViewContainer:(id)arg1 withBottomView:(id)arg2 inView:(id)arg3;	// IMP=0x000000010140c32c
- (void)updateTrailingConstraintOfContactUsButton;	// IMP=0x000000010140c120
- (void)updateTrailingConstraintOfNoButton;	// IMP=0x000000010140bf14
- (void)updateLeadingConstraintOfStatusLabel;	// IMP=0x000000010140bd08
- (void)updateBottomConstraintOfStatusView;	// IMP=0x000000010140badc
- (void)setupConstraintsForWebView:(id)arg1 inView:(id)arg2;	// IMP=0x000000010140ba80
- (void)showContactUsButton;	// IMP=0x000000010140b9b4
- (void)removeAllButtons;	// IMP=0x000000010140b90c
- (void)updateStatusViewForHelpfulStatus:(short)arg1;	// IMP=0x000000010140b8d0
- (void)updateStatusButtonsForHelpfulStatus:(short)arg1;	// IMP=0x000000010140adac
- (void)updateStatusTextForHelpfulStatus:(short)arg1;	// IMP=0x000000010140a6b8
- (void)hideStatusView:(_Bool)arg1;	// IMP=0x000000010140a520
- (void)addLeftNavigationButton;	// IMP=0x000000010140a2c8
- (void)addRightNavigationButton;	// IMP=0x000000010140a08c
- (void)initializeView;	// IMP=0x0000000101409d38
- (void)initializeWebview;	// IMP=0x0000000101409ab0
- (void)initializeComponents;	// IMP=0x000000010140994c
- (void)initializeFaqViewBaseController;	// IMP=0x0000000101409850
- (void)addBlurViewToStatusView;	// IMP=0x00000001014096a0
- (void)unregisterNotifications;	// IMP=0x0000000101409650
- (void)registerForNotifications;	// IMP=0x00000001014094d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

