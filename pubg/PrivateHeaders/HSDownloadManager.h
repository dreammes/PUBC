//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSDownloadNetworkManager, HSFileManager;

@interface HSDownloadManager : NSObject
{
    HSDownloadNetworkManager *_networkManager;	// 8 = 0x8
    HSFileManager *_filemanager;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000101363410
@property(retain, nonatomic) HSFileManager *filemanager; // @synthesize filemanager=_filemanager;
@property(retain, nonatomic) HSDownloadNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
- (void).cxx_destruct;	// IMP=0x00000001013635b4
- (id)init;	// IMP=0x0000000101363554
- (id)initCustom;	// IMP=0x0000000101363490
- (_Bool)resourceAvailableForURL:(id)arg1;	// IMP=0x00000001013633c8
- (void)resourceFromURL:(id)arg1 useCacheIfAvailable:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 andOptionalProgressBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001013630a0

@end

