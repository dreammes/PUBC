//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSString;

@interface APIResponse : NSObject <NSCoding>
{
    int _detailRetCode;	// 8 = 0x8
    int _retCode;	// 12 = 0xc
    int _seq;	// 16 = 0x10
    NSString *_errorMsg;	// 24 = 0x18
    NSDictionary *_jsonResponse;	// 32 = 0x20
    NSString *_message;	// 40 = 0x28
    id _userData;	// 48 = 0x30
}

@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDictionary *jsonResponse; // @synthesize jsonResponse=_jsonResponse;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
@property(nonatomic) int detailRetCode; // @synthesize detailRetCode=_detailRetCode;
- (void).cxx_destruct;	// IMP=0x0000000100b272dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100b2706c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100b26ec4

@end

