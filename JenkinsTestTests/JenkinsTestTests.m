//
//  JenkinsTestTests.m
//  JenkinsTestTests
//
//  Created by Arkadiusz Matecki on 23.12.2013.
//  Copyright (c) 2013 Perform Group. All rights reserved.
//

#import <XCTest/XCTest.h>

@interface JenkinsTestTests : XCTestCase

@end

@implementation JenkinsTestTests

- (void)setUp
{
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample
{
   // XCTFail(@"No implementation for \"%s\"", __PRETTY_FUNCTION__);
    XCTAssertTrue(YES, @"Test passed well and again");
}

@end
