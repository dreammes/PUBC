//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GGAWSResult : NSObject
{
    long long _code;	// 8 = 0x8
    NSString *_msg;	// 16 = 0x10
    NSString *_contentURL;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;	// IMP=0x0000000100c28afc
- (id)JSONSerilize;	// IMP=0x0000000100c289a4
- (id)initWithCode:(long long)arg1 andContentURL:(id)arg2;	// IMP=0x0000000100c28854

@end
