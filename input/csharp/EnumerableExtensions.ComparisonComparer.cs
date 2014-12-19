﻿// Copyright (c) Microsoft Open Technologies, Inc.  All Rights Reserved.  Licensed under the Apache License, Version 2.0.  See License.txt in the project root for license information.

using System;
using System.Collections.Generic;

namespace Roslyn.UnitTestFramework
{
    internal static partial class EnumerableExtensions
    {
        private class ComparisonComparer<T> : Comparer<T>
        {
            private readonly Comparison<T> compare;

            public ComparisonComparer(Comparison<T> compare)
            {
                this.compare = compare;
            }

            public override int Compare(T x, T y)
            {
                return compare(x, y);
            }
        }
    }
}