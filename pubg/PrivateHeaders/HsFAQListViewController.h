//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HSBaseViewController.h"

#import "HsAdapterObserver.h"
#import "UISearchBarDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HSMBProgressHUD, HsFAQsDM, HsTableView, NSArray, NSString, UISearchController, UITableViewController;

@interface HsFAQListViewController : HSBaseViewController <HsAdapterObserver, UISearchBarDelegate, UISearchResultsUpdating, UISearchControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    HSMBProgressHUD *_loadingScreen;	// 8 = 0x8
    _Bool _searchEventCaptured;	// 16 = 0x10
    _Bool _isFooterViewConfigured;	// 17 = 0x11
    NSString *_sectionPublishID;	// 24 = 0x18
    NSArray *_customContactUsFlows;	// 32 = 0x20
    NSString *_convPrefillText;	// 40 = 0x28
    HsFAQsDM *_faqsDM;	// 48 = 0x30
    HsTableView *_tableView;	// 56 = 0x38
    id _controller;	// 64 = 0x40
    id <HsTableViewAdapter> _adapter;	// 72 = 0x48
    id <HsTableViewAdapter><HsSearchControllerDelegate> _searchAdapter;	// 80 = 0x50
    id <HsFaqViewBaseController> _sectionsViewBaseController;	// 88 = 0x58
    UISearchController *_searchController;	// 96 = 0x60
    UITableViewController *_searchResultsController;	// 104 = 0x68
}

@property(retain, nonatomic) UITableViewController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(nonatomic) _Bool isFooterViewConfigured; // @synthesize isFooterViewConfigured=_isFooterViewConfigured;
@property(retain) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) id <HsFaqViewBaseController> sectionsViewBaseController; // @synthesize sectionsViewBaseController=_sectionsViewBaseController;
@property(retain, nonatomic) id <HsTableViewAdapter><HsSearchControllerDelegate> searchAdapter; // @synthesize searchAdapter=_searchAdapter;
@property(retain, nonatomic) id <HsTableViewAdapter> adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) id controller; // @synthesize controller=_controller;
@property(nonatomic) __weak HsTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) HsFAQsDM *faqsDM; // @synthesize faqsDM=_faqsDM;
@property(copy, nonatomic) NSString *convPrefillText; // @synthesize convPrefillText=_convPrefillText;
@property(retain, nonatomic) NSArray *customContactUsFlows; // @synthesize customContactUsFlows=_customContactUsFlows;
@property(retain, nonatomic) NSString *sectionPublishID; // @synthesize sectionPublishID=_sectionPublishID;
- (void).cxx_destruct;	// IMP=0x00000001014b684c
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x00000001014b6640
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x00000001014b6580
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x00000001014b64b0
- (_Bool)searchBarShouldBeginEditing:(id)arg1;	// IMP=0x00000001014b6460
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000001014b62a4
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00000001014b6118
- (void)willPresentSearchController:(id)arg1;	// IMP=0x00000001014b5ecc
- (void)didDismissSearchController:(id)arg1;	// IMP=0x00000001014b5df0
- (void)willDismissSearchController:(id)arg1;	// IMP=0x00000001014b5d1c
- (void)setTargetAndSelectorForSearchTableFooterViewControls;	// IMP=0x00000001014b5b7c
- (void)handleDataUpdatedForSearch;	// IMP=0x00000001014b5ac8
- (void)endEditingSearchText;	// IMP=0x00000001014b5a40
- (void)adapterDataSourceUpdationFailed;	// IMP=0x00000001014b57fc
- (void)noChangeInadapterDataSource;	// IMP=0x00000001014b570c
- (void)adapterDataSourceUpdated;	// IMP=0x00000001014b5448
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000001014b53f4
- (void)showInvalidSectionIdAlert;	// IMP=0x00000001014b5324
- (void)hideLoadingScreen;	// IMP=0x00000001014b52d4
- (void)updateTitle;	// IMP=0x00000001014b5138
- (void)addLeftNavigationButton;	// IMP=0x00000001014b4f3c
- (void)addLoadingScreen;	// IMP=0x00000001014b4e04
- (void)applyStyleToSearchController;	// IMP=0x00000001014b4c04
- (void)initializeFaqsViewBaseController;	// IMP=0x00000001014b4af4
- (void)initializeSearchController;	// IMP=0x00000001014b450c
- (void)adjustContentInsetWRTVoiceOverAccessibilityIssue;	// IMP=0x00000001014b42c0
- (void)initialiseUI;	// IMP=0x00000001014b3fb8
- (void)initializeFaqsListComponents:(_Bool)arg1;	// IMP=0x00000001014b3bfc
- (void)initializeFaqSearchComponents;	// IMP=0x00000001014b3ab8
- (void)configureHeaderFooterTable:(id)arg1 adapter:(id)arg2;	// IMP=0x00000001014b39c4
- (void)reloadTable:(id)arg1 adapter:(id)arg2;	// IMP=0x00000001014b38a8
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;	// IMP=0x00000001014b31e0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001014b3038
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001014b2ef4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001014b2e6c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001014b2e64
- (void)launchNewConversationScreen:(id)arg1;	// IMP=0x00000001014b2d04
- (void)launchConversationFromSearch;	// IMP=0x00000001014b2a34
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001014b29b8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001014b28dc
- (void)viewDidLoad;	// IMP=0x00000001014b272c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

