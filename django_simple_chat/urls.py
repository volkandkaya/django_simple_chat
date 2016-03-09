# -*- coding: utf-8 -*-
from __future__ import absolute_import, unicode_literals

from django.conf.urls import url

from .views import chat_detail, chat_new, chat_overview

urlpatterns = [
    url(r'^(?P<username>[\w.@+-]+)$', views.chat_detail, name='chat_detail'),
    url(r'^~new/$', views.chat_new, name='new'),
    url(r'^', views.chat_overview, name='overview'),
]
