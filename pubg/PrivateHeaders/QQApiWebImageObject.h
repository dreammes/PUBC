//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSURL;

@interface QQApiWebImageObject : QQApiObject
{
    NSURL *_previewImageURL;	// 40 = 0x28
}

+ (id)objectWithPreviewImageURL:(id)arg1 title:(id)arg2 description:(id)arg3;	// IMP=0x0000000100b31de8
@property(retain, nonatomic) NSURL *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
- (void)dealloc;	// IMP=0x0000000100b31e40
- (id)initWithPreviewImageURL:(id)arg1 title:(id)arg2 description:(id)arg3;	// IMP=0x0000000100b31d4c

@end
